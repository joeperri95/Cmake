cmake_minimum_required(VERSION "3.13.4")



set (SOURCES
    libExample.cpp
)

set (HEADERS
    libExample.hpp
)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})