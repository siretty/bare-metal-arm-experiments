
set(_target_name qbm.targets.common.arm)

add_library(
    ${_target_name}
    STATIC
    ExceptionHandlers.cpp
)

target_link_libraries(
    ${_target_name}
    PRIVATE qbm.libs.system
)

