#!/usr/bin/env bash

set -e

_CPU=arm926ej-s

arm-none-eabi-as  -mcpu="${_CPU}" -g startup.s -o startup.o

arm-none-eabi-gcc -mcpu="${_CPU}" -g -c hello-world.c -o hello-world.o

arm-none-eabi-ld -T startup.ld hello-world.o startup.o -o hello-world.elf
arm-none-eabi-objcopy -O binary hello-world.elf hello-world.bin

