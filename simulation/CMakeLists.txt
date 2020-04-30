cmake_minimum_required(VERSION "3.13.4")

set(Sources
    main.cpp
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(simulation main.cpp)