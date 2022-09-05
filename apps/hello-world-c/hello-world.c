#include "Drivers/Serial/PL011/Instance.h"

#include <stddef.h>
#include <stdint.h>

PL011_Instance UART0;

void print_string(const char *cstr)
{
    while (*cstr != '\0')
    {
        PL011_WriteData(&UART0, (uint8_t)(*cstr));
        ++cstr;
    }
}

void System_Entrypoint()
{
    PL011_Initialize(&UART0, NULL);

    print_string("Hello World!\n");
}

// vim: et sw=4 sts=4:
