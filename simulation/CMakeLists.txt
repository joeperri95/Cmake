cmake_minimum_required(VERSION "3.13.4")

set(Sources
    main.cpp
)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()
 
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(simulation main.cpp)
target_link_libraries(simulation ${CONAN_LIBS})
