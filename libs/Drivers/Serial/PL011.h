#ifndef DRIVERS_SERIAL_PL011_H
#define DRIVERS_SERIAL_PL011_H

#include <stdint.h>

typedef struct PL011_Instance PL011_Instance;
struct PL011_Instance
{
    /* private */
    void * mmio_base_address;
};

void PL011_Initialize(PL011_Instance *self, const void * reserved);

void PL011_WriteData(const PL011_Instance *self, uint8_t byte);

uint8_t PL011_ReadData(const PL011_Instance *self, uint32_t * flags);

#endif // DRIVERS_SERIAL_PL011_H

// vim: et sw=4 sts=4:

