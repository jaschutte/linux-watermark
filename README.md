
# Linux Watermark
A simple program essential to the Linux ecosystem. Adding clear and readable guidelines
on the screen for activating your Linux system.

# Motivation
I've been using Linux myself for the past few years, and I have noticed a large increase in piracy
in the Linux ecosystem. I felt it necessary to take actions against this rampent piracy by making
a simple watermark visible on screen for all unverified systems.

# Actual info

I've not yet bothered with making a proper build system or anything, there's a `sh` script
embedded inside of the shell.nix file. You could extract that and use it to build & run this
for yourself. Maybe later I'll come back and make a proper build for this, until then, you're
on your own! Or use nix, lol.

## Build dependencies
- wayland
- wayland-protocols
- wlr-wayland (needed for wlr-layer-shell-unstable-v1)

## Runtime dependencies
A wayland compositor supporting wlr-layer-shell-unstable-v1.

This includes al wlroots based compositors and Hyprland. For other compositors, check if they
implement wlr-layer-shell-unstable-v1.

