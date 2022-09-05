#!/usr/bin/env python3

import argparse
import os
import subprocess

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--debug", "-d", action="store_true")
    parser.add_argument("--cpp", action="store_true")
    # parser.add_argument("--boot-from-flash", "-F", action="store_true")
    args = parser.parse_args()

    qemu_file = "qemu-system-arm"
    qemu_args = [
        qemu_file,
        "-M", "versatilepb",
        "-m", "128M",
        "-nographic",
        #"-serial", "stdio",
    ]

    if args.debug:
        qemu_args += ["-s", "-S"]

    if args.cpp:
        qemu_args += ["--kernel", "_b/apps/hello-world-cpp/hello-world-cpp.elf"]
    else:
        qemu_args += ["--kernel", "_b/apps/hello-world/hello-world.elf"]

    os.execvp(qemu_file, qemu_args)

#if args.boot_from_flash:
#    #qemu_args += ["-device", "loader,addr=0x10000,file=_b/apps/hello-world/hello-world.bin"]
#    #qemu_args += ["-pflash", "_b/apps/hello-world/hello-world.bin"]
#    qemu_args += ["-drive", "file=_b/apps/hello-world/hello-world.bin,format=raw,id=versatile.flash"]
#else:
#    ... add kernel elf

if __name__ == "__main__":
    main()
