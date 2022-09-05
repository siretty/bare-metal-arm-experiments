#include "SP804.hpp"

namespace Drivers::Timer::SP804 {

void Initialize(Instance *self, const void *reserved)
{
    self->_mmio_base_address = (void *)(uintptr_t)(0x101E2000);
}

} // namespace Drivers::Timer::SP804

// vim: et sw=4 sts=4:
