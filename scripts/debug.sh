#!/usr/bin/env bash

exec qemu-system-arm    \
    -M versatilepb      \
    -m 128M             \
    -nographic          \
    -S -s               \
    -kernel _b/apps/hello-world/hello-world.elf

# vim: et sw=4 sts=4:
