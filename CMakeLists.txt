cmake_minimum_required(VERSION 3.24)
project(calculatorclionpridemic)

set(CMAKE_CXX_STANDARD 17)
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(calculatorclionpridemic main.cpp calculator.cpp)
target_link_libraries(calculatorclionpridemic ${CONAN_LIBS})


add_executable(calculatorclionpridemic_test test.cpp calculator.cpp)
target_link_libraries(calculatorclionpridemic_test ${CONAN_LIBS})

# Register test executable with CTest
include(GoogleTest)
gtest_discover_tests(calculatorclionpridemic_test)