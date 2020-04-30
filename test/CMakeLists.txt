cmake_minimum_required(VERSION "3.13.4")

set(testName "exampleTest")

set(Sources
    main.cpp
    test.cpp
)

set(Headers
    test.hpp
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(${testName} ${Sources} ${Headers})
target_link_libraries(${testName} PUBLIC
    gtest_main    
    Example
    )

add_test(
    NAME ${testName}
    COMMAND ${testName}
)