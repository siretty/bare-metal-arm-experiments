#include "Instance.h"

#include <stdlib.h>

void PL011_Initialize(PL011_Instance *self, const void * reserved)
{
    self->mmio_base_address = (void *)(uintptr_t)(0x101f1000);
}

static inline uint32_t * PL011_UARTDR(const PL011_Instance *self);

void PL011_WriteData(const PL011_Instance *self, uint8_t byte)
{
    *PL011_UARTDR(self) = (uint32_t)(byte);
}

uint8_t PL011_ReadData(const PL011_Instance *self, uint32_t * const flags)
{
    if (flags != NULL)
    {
        *flags = (uint32_t)(*PL011_UARTDR(self) & 0x00000F00);
    }

    return (uint8_t)(*PL011_UARTDR(self) & 0xFF);
}

// ============================================================
//  Inline Implementations
// ============================================================

static inline uint32_t * PL011_UARTDR(const PL011_Instance *self)
{
    return (uint32_t *)(self->mmio_base_address);
}

// vim: et sw=4 sts=4:
