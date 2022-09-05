#include "Drivers/Serial/PL011.hpp"
#include "Drivers/Timer/SP804.hpp"
#include "System/Entrypoint.hpp"

#include <stddef.h>
#include <stdint.h>

namespace {

Drivers::Serial::PL011::Instance UART0;

void print_string(const char *cstr)
{
    while (*cstr != '\0')
    {
        Drivers::Serial::PL011::WriteByte(&UART0, (uint8_t)(*cstr));
        ++cstr;
    }
}

} // namespace

namespace System {

void Entrypoint()
{
    Drivers::Serial::PL011::Initialize(&UART0, nullptr);

    print_string("Hello World!\n");
}

} // namespace System

// vim: et sw=4 sts=4:
