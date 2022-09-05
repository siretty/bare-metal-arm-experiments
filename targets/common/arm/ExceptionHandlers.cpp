#include "System/ARM/Exception.hpp"
#include "System/Entrypoint.hpp"

extern "C"
{

    void Targets_Common_ARM_Exception_Reset()
    {
        System::Entrypoint();
    }

    void Targets_Common_ARM_Exception_SWI()
    {
        System::ARM::Exception::SWI();
    }

    void Targets_Common_ARM_Exception_IRQ()
    {
        System::ARM::Exception::IRQ();
    }

    void Targets_Common_ARM_Exception_FIQ()
    {
        System::ARM::Exception::FIQ();
    }

} // extern "C"
