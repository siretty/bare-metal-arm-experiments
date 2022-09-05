
set(_target_name qbm.libs.drivers)

add_library(
    ${_target_name}
    STATIC
  
    Drivers/Serial/PL011.cpp
    Drivers/Serial/PL011.hpp
  
    Drivers/Timer/SP804.cpp
    Drivers/Timer/SP804.hpp
)

target_include_directories(
    ${_target_name}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

