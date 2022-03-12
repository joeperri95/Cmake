cmake_minimum_required(VERSION "3.13.4")

set (SOURCES
    libExample.cpp
)

set (HEADERS
    libExample.hpp
)


include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})
