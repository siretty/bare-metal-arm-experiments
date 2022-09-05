
include(${CMAKE_CURRENT_LIST_DIR}/gcc-arm-none-eabi.cmake)

set(_C_CXX_FLAGS "-mcpu=arm926ej-s")

set(CMAKE_C_FLAGS_INIT          "${_C_CXX_FLAGS}")
set(CMAKE_CXX_FLAGS_INIT        "${_C_CXX_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS_INIT "${_LD_FLAGS} -T ${CMAKE_CURRENT_LIST_DIR}/../../startup.ld")

