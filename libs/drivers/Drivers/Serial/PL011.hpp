#ifndef DRIVERS_SERIAL_PL011_HPP
#define DRIVERS_SERIAL_PL011_HPP

#include <stdint.h>

namespace Drivers::Serial::PL011 {

struct Instance
{
    void *_mmio_base_address = nullptr;
};

void Initialize(Instance *self, const void *reserved);

void WriteByte(const Instance *self, uint8_t byte);

uint8_t ReadByte(const Instance *self, uint32_t *flags);

} // namespace Drivers::Serial::PL011

#endif // DRIVERS_SERIAL_PL011_HPP

// vim: et sw=4 sts=4:
