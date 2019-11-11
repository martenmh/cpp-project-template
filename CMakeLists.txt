cmake_minimum_required(VERSION 3.6)
project(rdbms)


include_directories(include)

# Link runTests with what we want to test and the GTest and pthread library
add_executable(rdbms src/main.cpp src/factorial.cpp)
target_link_libraries(rdbms)