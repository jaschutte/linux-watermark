{ pkgs ? import <nixpkgs> {} }:
pkgs.mkShell {
    packages = with pkgs; let 
        run-script = (writeShellScriptBin "run" ''
            EXEC=main
            OUT=build
            IN=src
            DEPS=extern
            PROTOCOLS=protocols

            rm -rf "$OUT"
            mkdir "$OUT"

            rm -rf "$PROTOCOLS"
            mkdir "$PROTOCOLS"

            wayland-scanner 'private-code' \
                < ${wayland-protocols}/share/wayland-protocols/stable/xdg-shell/xdg-shell.xml \
                > $PROTOCOLS/xdg-shell-protocol.c

            wayland-scanner 'client-header' \
                < ${wayland-protocols}/share/wayland-protocols/stable/xdg-shell/xdg-shell.xml \
                > $PROTOCOLS/xdg-shell-protocol.h

            wayland-scanner 'private-code' \
                < ${wlr-protocols}/share/wlr-protocols/unstable/wlr-layer-shell-unstable-v1.xml \
                > $PROTOCOLS/wlr-layer-shell-unstable.c

            wayland-scanner 'client-header' \
                < ${wlr-protocols}/share/wlr-protocols/unstable/wlr-layer-shell-unstable-v1.xml \
                > $PROTOCOLS/wlr-layer-shell-unstable.h

            ${gcc}/bin/gcc "$IN"/* "$PROTOCOLS"/* $(find "$DEPS" -name '*.c') -lwayland-client -I"$PROTOCOLS" -I"$DEPS" -o "$OUT/$EXEC"

            ./$OUT/$EXEC
        '');
    in [
        gcc
        clang
        wayland
        wayland-scanner

        (writeShellScriptBin "cmp-fix" ''
            ${bear}/bin/bear -- ${run-script}/bin/run
        '')
        run-script
    ];
}
