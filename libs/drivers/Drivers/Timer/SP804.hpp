#ifndef DRIVERS_TIMER_SP804_HPP
#define DRIVERS_TIMER_SP804_HPP

#include <stdint.h>

namespace Drivers::Timer::SP804 {

struct Instance
{
    void *_mmio_base_address = nullptr;
};

void Initialize(Instance *self, const void *reserved);

} // namespace Drivers::Timer::SP804

#endif // DRIVERS_TIMER_SP804_HPP

// vim: et sw=4 sts=4:
