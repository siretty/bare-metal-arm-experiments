#!/usr/bin/env bash

set -e

_CPU=arm926ej-s

do_assemble() {
    arm-none-eabi-as        \
        -mcpu="${_CPU}"     \
        -g                  \
        "${1}" -o "${1}.o"
}

do_compile_c() {
    arm-none-eabi-gcc       \
        -mcpu="${_CPU}"     \
        -g                  \
        -c                  \
        -I.                 \
        "${1}" -o "${1}.o"
}

do_link() {
    local _o
    local _a

    _o="${1}"
    shift

    _a=( )

    local _processing=true
    while [ x"${_processing}" == x"true" ] ; do
        local _input="${1}"

        if [ x"${_input}" == x"" ] ; then
            _processing=false
            continue
        fi

        shift

        _a+=( "${_input}.o" )
    done

    arm-none-eabi-ld    \
        -T startup.ld   \
        "${_a[@]}"      \
        -o "${_o}"
}

do_assemble startup.s
do_compile_c hello-world.c
do_compile_c Drivers/Serial/PL011/Instance.c

do_link hello-world.elf startup.s hello-world.c Drivers/Serial/PL011/Instance.c

arm-none-eabi-objcopy -O binary hello-world.elf hello-world.bin

# vim: et sw=4 sts=4:
