
include(${CMAKE_CURRENT_LIST_DIR}/../common/arm-none-eabi.cmake)

set(CMAKE_CXX_FLAGS_INIT "-fno-exceptions -fno-rtti -ffreestanding")

set(CMAKE_C_LINK_FLAGS "-T ${CMAKE_CURRENT_LIST_DIR}/startup.ld")
set(CMAKE_CXX_LINK_FLAGS "${CMAKE_C_LINK_FLAGS}")

set(
  EXAMPLE_TARGET_ADD_SUBDIRECTORIES
  targets/common
  targets/qemu-versatilepb/startup
)

