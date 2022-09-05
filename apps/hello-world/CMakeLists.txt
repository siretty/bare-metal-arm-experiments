
set(_target_name qbm.apps.hello-world)

add_executable(
    ${_target_name}

    hello-world.cpp
)

target_link_libraries(
    ${_target_name}
    PUBLIC qbm.libs.common
    PUBLIC qbm.libs.drivers
    PUBLIC qbm.libs.system
    PUBLIC qbm.targets.qemu-versatilepb
)

set_target_properties(
    ${_target_name}
    PROPERTIES
    OUTPUT_NAME hello-world.elf
)

add_custom_command(
    TARGET ${_target_name}
    POST_BUILD
    COMMAND arm-none-eabi-objcopy -O binary ${CMAKE_CURRENT_BINARY_DIR}/hello-world.elf ${CMAKE_CURRENT_BINARY_DIR}/hello-world.bin
    COMMENT "Extracting raw binary from ELF"
)

