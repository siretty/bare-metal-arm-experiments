
.global _Reset
_Reset:
    LDR sp, =stack_top
    BL c_entrypoint
    B .

/* vim: et sw=4 sts=4 */

