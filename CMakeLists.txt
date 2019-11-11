cmake_minimum_required(VERSION 3.6)
project(testing-boilerplate)

include_directories(include)

# Link runTests with what we want to test and the GTest and pthread library
add_executable(testing-boilerplate src/main.cpp src/factorial.cpp)
target_link_libraries(testing-boilerplate)