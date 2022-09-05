#ifndef DRIVERS_TIMER_SP804_H
#define DRIVERS_TIMER_SP804_H

#include "System/Macros.h"

#include <stdint.h>

SYSTEM_HEADER_BEGIN

typedef struct SP804_Instance SP804_Instance;
struct SP804_Instance
{
    /* private */
    void *mmio_base_address;
};

void SP804_Initialize(SP804_Instance *self, const void *reserved);

uint32_t SP804_Read_Timer1Load(SP804_Instance *self);
void SP804_Write_Timer1Load(SP804_Instance *self, uint32_t value);

uint32_t SP804_Read_Timer1Value(SP804_Instance *self);

uint32_t SP804_Read_Timer1Control(SP804_Instance *self);
void SP804_Write_Timer1Control(SP804_Instance *self, uint32_t value);

SYSTEM_HEADER_END

#endif // DRIVERS_TIMER_SP804_H
