#ifndef SYSTEM_INTERRUPTS_H
#define SYSTEM_INTERRUPTS_H

#include "System/Macros.h"

SYSTEM_HEADER_BEGIN

void ARM_Exception_SoftwareInterrupt();

void ARM_Exception_IRQ();

void ARM_Exception_FIQ();

SYSTEM_HEADER_END

#endif // SYSTEM_INTERRUPTS_H
