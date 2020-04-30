cmake_minimum_required(VERSION "3.13.4")

project(Example CXX)

add_compile_options(-Wall)
include_directories(..)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE)

enable_testing()

add_subdirectory(googletest)
add_subdirectory(simulation)
add_subdirectory(libExample)
add_subdirectory(test)