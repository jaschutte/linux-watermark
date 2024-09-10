
#include <wayland-client-protocol.h>
#include <wayland-client-core.h>

#include "xdg-shell-protocol.h"
#include "wlr-layer-shell-unstable.h"

#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <string.h>

struct wl_globals {
    struct wl_display* display;
    struct wl_registry* registry;
    struct wl_compositor* compositor;
    struct wl_shm* shm;

    struct wl_surface* surface;
    struct xdg_wm_base* xdg_wm_base;
    struct xdg_surface* xdg_surface;
    struct xdg_toplevel* xdg_toplevel;

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

void draw_frame() {
    const uint32_t w = 1920;
    const uint32_t h = 1080;
    const uint32_t bytes_per_pixel = 4;
    const uint32_t stride = w * bytes_per_pixel;
    const uint32_t num_of_frames = 2;
    const uint32_t total_buffer_size = h * stride * num_of_frames;

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
        w,
        h,
        stride,
        WL_SHM_FORMAT_ARGB8888
    );

    // Set everything to white
    for (uint32_t x = 0; x < w; x++) {
        for (uint32_t y = 0; y < h; y++) {
            uint8_t* pixel_addr = app_state.framebuffer.data + y * stride + x * bytes_per_pixel;
            uint8_t* b = pixel_addr + 0;
            uint8_t* g = pixel_addr + 1;
            uint8_t* r = pixel_addr + 2;
            uint8_t* a = pixel_addr + 3;
            *a = 255;
            *r = 0;
            *g = 0;
            *b = 0;
            if (x < 200) {
                *r = 255;
            } else if (x < 400) {
                *g = 255;
            } else if (x < 600) {
                *b = 255;
            } else if (x < 800) {
                *a = 0;
            }
        }
    }
    /*memset(app_state.framebuffer.data, 255, total_buffer_size);*/
}

static void xdg_configure_surface(void* data, struct xdg_surface* xdg_surface, uint32_t serial) {
    xdg_surface_ack_configure(xdg_surface, serial);

    draw_frame();

    // Attach surface to everything
    wl_surface_attach(app_state.surface, app_state.framebuffer.buffer, 0, 0);
    wl_surface_damage(app_state.surface, 0, 0, 1920, 1080);
    wl_surface_commit(app_state.surface);
}

const struct xdg_surface_listener xdg_surface_listener = {
    .configure = xdg_configure_surface
};

static void xdg_wm_base_ping(void* data, struct xdg_wm_base* xdg_wm_base, uint32_t serial) {
    xdg_wm_base_pong(xdg_wm_base, serial);
}

const struct xdg_wm_base_listener xdg_wm_base_listener = {
    .ping = xdg_wm_base_ping
};

static void registry_on_global(void* data, struct wl_registry* registry, uint32_t name, const char* interface, uint32_t version) {
    if (strcmp(interface, wl_compositor_interface.name) == 0) {
        app_state.compositor = wl_registry_bind(app_state.registry, name, &wl_compositor_interface, version);
    }
    if (strcmp(interface, xdg_wm_base_interface.name) == 0) {
        app_state.xdg_wm_base = wl_registry_bind(app_state.registry, name, &xdg_wm_base_interface, version);
        xdg_wm_base_add_listener(app_state.xdg_wm_base, &xdg_wm_base_listener, NULL);
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
    app_state.xdg_surface = xdg_wm_base_get_xdg_surface(app_state.xdg_wm_base, app_state.surface);
    xdg_surface_add_listener(app_state.xdg_surface, &xdg_surface_listener, NULL);
    app_state.xdg_toplevel = xdg_surface_get_toplevel(app_state.xdg_surface);
    xdg_toplevel_set_title(app_state.xdg_toplevel, "Yoo this works?!");
    wl_surface_commit(app_state.surface);

    while (wl_display_dispatch(app_state.display)) {};

    return 0;
}

