#!/usr/bin/env bash

exec qemu-system-arm \
    -M versatilepb   \
    -m 128M          \
    -nographic       \
    -kernel _b/apps/hello-world/hello-world.bin


# vim: et sw=4 sts=4:
