
set(_target_name qbm.libs.system)

add_library(
    ${_target_name}
    STATIC
  
    System/Entrypoint.cpp
    System/Entrypoint.hpp
  
    System/ARM/Exception.cpp
    System/ARM/Exception.hpp
)

target_include_directories(
    ${_target_name}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

