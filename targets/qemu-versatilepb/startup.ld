
ENTRY(_ExceptionVectors)

SECTIONS
{
    . = 0x0;

    .ExceptionVectors : {
        KEEP( *(.ExceptionVectors) )
    }

    . = 0x10000;

    .text : {
        *(.text .text.*)
    }
    .data : {
        *(.data)
    }
    .bss : {
        *(.bss COMMON)
    }

    /* reserve stack memory */
    . = ALIGN(8);
    . = . + 0x1000;
    stack_top = .;
}

/* vim: set et sw=4 sts=4: */
