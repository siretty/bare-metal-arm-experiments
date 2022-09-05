
/* see section A2.6 for the exception handling on ARMv4/5/6 */

.section ".ExceptionVectors", "ax"

.global _ExceptionVectors

_ExceptionVectors:
    BL _ExceptionReset
    BL _ExceptionUndefinedInstructions
    BL _ExceptionSoftwareInterrupt
    BL _ExceptionPrefetchAbort
    BL _ExceptionDataAbort
    BL _ExceptionIRQ
    BL _ExceptionFIQ

_ExceptionReset:
    LDR sp, =stack_top
    BL Targets_Common_ARM_Exception_Reset
    B .

_ExceptionUndefinedInstructions:
    B .
    /* to return after emulating the undefined instruction:
     * MOVS pc, r14
     */

_ExceptionSoftwareInterrupt:
    BL Targets_Common_ARM_Exception_SWI
    MOVS pc, r14

_ExceptionPrefetchAbort:
    B .
    /* return to normal by executing
     * SUBS PC, R14, #4
     */

_ExceptionDataAbort:
    B .
    /* after fixing the reason for the abort (and re-execute the aborted instruction):
     * SUBS PC, R14, #8
     * and if the aborted instruction does not need to be re-executed:
     * SUBS pc, r14, #4
     */

_ExceptionIRQ:
    BL Targets_Common_ARM_Exception_IRQ
    /* return after servicing the interrupt */
    SUBS pc, r14, #4

_ExceptionFIQ:
    BL Targets_Common_ARM_Exception_FIQ
    /* return after servicing the interrupt */
    SUBS pc, r14, #4

/* vim: set et sw=4 sts=4: */
