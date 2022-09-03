
#include <stdint.h>

volatile uint32_t * const UART0_DR = (uint32_t *)(uintptr_t)(0x101f1000);

void uart0_write_string(const char * cstr)
{
    while (*cstr != '\0')
    {
        *UART0_DR = (uint32_t)(*cstr);
        ++cstr;
    }
}

void c_entrypoint()
{
    uart0_write_string("Hello World!");
}

// vim: et sw=4 sts=4:
