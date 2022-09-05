
add_executable(
  QemuBareMetal_Apps_HelloWorld

  hello-world.c
)
target_link_libraries(
  QemuBareMetal_Apps_HelloWorld
  PUBLIC QemuBareMetal_Libs
  PUBLIC QemuBareMetal_Targets.qemu-versatilepb
)
set_target_properties(
  QemuBareMetal_Apps_HelloWorld
  PROPERTIES
  OUTPUT_NAME hello-world.elf
)
add_custom_command(
  TARGET QemuBareMetal_Apps_HelloWorld
  POST_BUILD
  COMMAND arm-none-eabi-objcopy -O binary ${CMAKE_CURRENT_BINARY_DIR}/hello-world.elf ${CMAKE_CURRENT_BINARY_DIR}/hello-world.bin
  COMMENT "Extracting raw binary from ELF"
)

