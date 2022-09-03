
ENTRY(_Reset)

SECTIONS
{
    . = 0x10000;
    .startup . : { startup.s.o(.text) }

    .text : { *(.text) }
    .data : { *(.data) }
    .bss :  { *(.bss COMMON) }

    /* reserve stack memory */
    . = ALIGN(8);
    . = . + 0x1000;
    stack_top = .;
}

/* vim: et sw=4 sts=4: */

