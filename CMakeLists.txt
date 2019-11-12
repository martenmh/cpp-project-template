cmake_minimum_required(VERSION 3.6)
project(template)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin")

find_package(GTest REQUIRED)

include_directories(include)

# Link runTests with what we want to test and the GTest and pthread library
add_executable(template src/main.cpp src/factorial.cpp)
target_link_libraries(template)


include_directories(${GTEST_INCLUDE_DIRS})
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests test/tests.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} gtest_main pthread)
