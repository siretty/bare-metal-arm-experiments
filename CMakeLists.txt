cmake_minimum_required(VERSION 3.6)

project(QemuBareMetal LANGUAGES C CXX ASM)

set(CMAKE_CXX_STANDARD 20)

foreach (_dpath IN LISTS EXAMPLE_TARGET_ADD_SUBDIRECTORIES)
  add_subdirectory(${_dpath})
endforeach()

add_subdirectory(libs)
add_subdirectory(apps)

