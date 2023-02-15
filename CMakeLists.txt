cmake_minimum_required(VERSION 3.24)
project(calculatorclionpridemic)

set(CMAKE_CXX_STANDARD 17)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(calculatorclionpridemic main.cpp calculator.cpp)


add_executable(calculatorclionpridemic_test test.cpp calculator.cpp)

target_link_libraries(calculatorclionpridemic_test ${GTEST_LIBRARIES} pthread)
# Register test executable with CTest
include(GoogleTest)
gtest_discover_tests(calculatorclionpridemic_test)