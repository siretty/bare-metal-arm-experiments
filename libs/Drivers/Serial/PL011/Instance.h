#ifndef DRIVERS_SERIAL_PL011_INSTANCE_H
#define DRIVERS_SERIAL_PL011_INSTANCE_H

#include "System/Macros.h"

SYSTEM_HEADER_BEGIN

#include <stdint.h>

typedef struct PL011_Instance PL011_Instance;
struct PL011_Instance
{
    /* private */
    void *mmio_base_address;
};

void PL011_Initialize(PL011_Instance *self, const void *reserved);

void PL011_WriteData(const PL011_Instance *self, uint8_t byte);

uint8_t PL011_ReadData(const PL011_Instance *self, uint32_t *flags);

SYSTEM_HEADER_END

#endif // DRIVERS_SERIAL_PL011_INSTANCE_H

// vim: et sw=4 sts=4:
