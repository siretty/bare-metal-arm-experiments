#include "PL011.hpp"

namespace Drivers::Serial::PL011 {

void Initialize(Instance *self, const void *reserved)
{
    self->_mmio_base_address = (void *)(uintptr_t)(0x101f1000);
}

static inline uint32_t *PL011_UARTDR(const Instance *self);

void WriteByte(const Instance *self, uint8_t byte)
{
    *PL011_UARTDR(self) = (uint32_t)(byte);
}

uint8_t ReadByte(const Instance *self, uint32_t *const flags)
{
    if (flags != nullptr)
    {
        *flags = (uint32_t)(*PL011_UARTDR(self) & 0x00000F00);
    }

    return (uint8_t)(*PL011_UARTDR(self) & 0xFF);
}

// ============================================================
//  Inline Implementations
// ============================================================

static inline uint32_t *PL011_UARTDR(const Instance *self)
{
    return (uint32_t *)(self->_mmio_base_address);
}

} // namespace Drivers::Serial::PL011

// vim: et sw=4 sts=4:
