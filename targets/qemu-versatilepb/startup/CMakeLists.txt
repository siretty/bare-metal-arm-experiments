
set(_target_name qbm.targets.qemu-versatilepb)

add_library(
    ${_target_name}
    STATIC
    startup.s
)

set_target_properties(
    ${_target_name}
    PROPERTIES
    LINKER_LANGUAGE C
)

target_link_libraries(
    ${_target_name}
    PRIVATE qbm.targets.common.arm
)

