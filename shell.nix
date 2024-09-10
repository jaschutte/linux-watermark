{ pkgs ? import <nixpkgs> {} }:
pkgs.mkShell {
    packages = with pkgs; [
        gcc
        clang
        wayland
        wayland-scanner

        (writeShellScriptBin "run" ''
            EXEC=main
            OUT=build
            IN=src
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

            ${gcc}/bin/gcc "$IN/main.c" "$PROTOCOLS/xdg-shell-protocol.c" -lwayland-client -L"$PROTOCOLS" -o "$OUT/$EXEC"

            ./$OUT/$EXEC
        '')
    ];
}
