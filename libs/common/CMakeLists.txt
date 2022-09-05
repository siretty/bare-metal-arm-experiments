
set(_target_name qbm.libs.common)

add_library(
    ${_target_name}
    STATIC
  
    Common/Macros.hpp
    Common/Macros.cpp
)

target_include_directories(
    ${_target_name}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

