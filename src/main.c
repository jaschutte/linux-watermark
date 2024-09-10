
#include <wayland-client-protocol.h>
#include <wayland-client-core.h>

#include "xdg-shell-protocol.h"
#include "wlr-layer-shell-unstable.h"

#include "lodepng/lodepng.h"

#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <string.h>

extern uint8_t _binary_watermark_png_start[];
extern uint8_t _binary_watermark_png_end[];
extern uint8_t _binary_watermark_png_size[];

struct wl_globals {
    struct wl_display* display;
    struct wl_registry* registry;
    struct wl_compositor* compositor;
    struct wl_shm* shm;

    struct wl_surface* surface;
    struct zwlr_layer_surface_v1* zwlr_surface;
    struct zwlr_layer_shell_v1* zwlr_shell;

    struct {
        int shm_fd;
        uint8_t* data;
        struct wl_shm_pool* pool;
        struct wl_buffer* buffer;
    } framebuffer;
};

struct wl_globals app_state;

int get_shm_fd(size_t size) {
    // Create a file descriptor for shared memory
    char name[128];
    sprintf(name, "pid-u%d_shared-mem", getpid());
    int fd = shm_open(name, O_RDWR | O_CREAT | O_EXCL, 0600);
    if (fd >= 0) {
        // We got the fd, now we can unlink it again
        shm_unlink(name);

        // Set the size for the fd
        int fail = ftruncate(fd, size);
        if (fail < 0) {
            return fail;
        }
    }
    return fd;
}

void draw_frame(uint32_t width, uint32_t height) {
    const uint32_t bytes_per_pixel = 4;
    const uint32_t stride = width * bytes_per_pixel;
    const uint32_t num_of_frames = 2;
    const uint32_t total_buffer_size = height * stride * num_of_frames;

    int fd = get_shm_fd(total_buffer_size);
    if (fd < 0) {
        printf("Failed retrieving fd");
        return;
    }

    // Allocate the memory
    app_state.framebuffer.data = mmap(
        NULL,
        total_buffer_size,
        PROT_READ | PROT_WRITE,
        MAP_SHARED,
        fd,
        0
    );

    // Create a shm pool
    app_state.framebuffer.pool = wl_shm_create_pool(app_state.shm, fd, total_buffer_size);
    // Create the shm buffer
    app_state.framebuffer.buffer = wl_shm_pool_create_buffer(
        app_state.framebuffer.pool,
        0,
        width,
        height,
        stride,
        WL_SHM_FORMAT_ARGB8888
    );

    uint32_t img_width, img_height;
    uint8_t* image;
    lodepng_decode32(
        &image, 
        &img_width, &img_height, 
        _binary_watermark_png_start, 
        _binary_watermark_png_end - _binary_watermark_png_start
    );

    if (img_width != width || img_height != height) {
        printf("Image does not overlap with surface size, giving up");
        return;
    }

    // The buffer size matches the image size
    memcpy(app_state.framebuffer.data, image, total_buffer_size);
}

static void configure_surface(void* data, struct zwlr_layer_surface_v1* zwlr_surface, uint32_t serial, uint32_t width, uint32_t height) {
    // ACK
    zwlr_layer_surface_v1_ack_configure(zwlr_surface, serial);

    // Draw our frame
    draw_frame(width, height);

    // Attach surface to everything
    wl_surface_attach(app_state.surface, app_state.framebuffer.buffer, 0, 0);
    wl_surface_damage(app_state.surface, 0, 0, width, height);
    wl_surface_commit(app_state.surface);

}

static void close_surface(void* data, struct zwlr_layer_surface_v1* zwlr_surface) {
    // Who cares about cleaning up memory?
    // Not me
}

struct zwlr_layer_surface_v1_listener zwlr_surface_listener = {
    .configure = configure_surface,
    .closed = close_surface
};

static void registry_on_global(void* data, struct wl_registry* registry, uint32_t name, const char* interface, uint32_t version) {
    if (strcmp(interface, wl_compositor_interface.name) == 0) {
        app_state.compositor = wl_registry_bind(app_state.registry, name, &wl_compositor_interface, version);
    }
    if (strcmp(interface, zwlr_layer_shell_v1_interface.name) == 0) {
        app_state.zwlr_shell = wl_registry_bind(app_state.registry, name, &zwlr_layer_shell_v1_interface, version);
    }
    if (strcmp(interface, wl_shm_interface.name) == 0) {
        app_state.shm = wl_registry_bind(app_state.registry, name, &wl_shm_interface, version);
    }
};

static void registry_on_global_remove(void* data, struct wl_registry* registry, uint32_t name) {

};

static const struct wl_registry_listener registry_listener = {
    .global = registry_on_global,
    .global_remove = registry_on_global_remove,
};

int main() {
    // Connect to a display
    app_state.display = wl_display_connect(NULL);
    if (app_state.display == NULL) {
        printf("Couldn't connect to display\n");
        return 1;
    }

    // Register our event listener
    app_state.registry = wl_display_get_registry(app_state.display);
    if (app_state.registry == NULL) {
        printf("Couldn't get registry\n");
        return 1;
    }
    wl_registry_add_listener(app_state.registry, &registry_listener, NULL);

    // Block until all events are processed
    wl_display_roundtrip(app_state.display);

    app_state.surface = wl_compositor_create_surface(app_state.compositor);
    app_state.zwlr_surface = zwlr_layer_shell_v1_get_layer_surface(app_state.zwlr_shell, app_state.surface, NULL, ZWLR_LAYER_SHELL_V1_LAYER_OVERLAY, "buy-linux");
    zwlr_layer_surface_v1_add_listener(app_state.zwlr_surface, &zwlr_surface_listener, NULL);

    zwlr_layer_surface_v1_set_size(app_state.zwlr_surface, 500, 100);
    zwlr_layer_surface_v1_set_anchor(app_state.zwlr_surface, ZWLR_LAYER_SURFACE_V1_ANCHOR_RIGHT | ZWLR_LAYER_SURFACE_V1_ANCHOR_BOTTOM);
    zwlr_layer_surface_v1_set_margin(app_state.zwlr_surface, 0, 32, 32, 0);

    wl_surface_commit(app_state.surface);

    while (wl_display_dispatch(app_state.display)) {};

    return 0;
}

