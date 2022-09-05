
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)

set(CMAKE_CROSSCOMPILING 1)

set(CMAKE_ASM_COMPILER        arm-none-eabi-as)
set(CMAKE_C_COMPILER          arm-none-eabi-gcc)
set(CMAKE_CXX_COMPILER        arm-none-eabi-g++)

set(_LD arm-none-eabi-ld)
set(CMAKE_CXX_LINK_EXECUTABLE "${_D} <CMAKE_CXX_LINK_FLAGS> <LINK_LIBRARIES> <LINK_FLAGS> -o <TARGET> <OBJECTS>")

set(CMAKE_C_LINK_EXECUTABLE   )
set(CMAKE_CXX_LINK_EXECUTABLE arm-none-eabi-ld)

set(_LD_FLAGS "--specs=nosys.specs")

