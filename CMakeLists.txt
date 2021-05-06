cmake_minimum_required(VERSION 3.17)

project(cpp)

add_subdirectory(src lib)
add_executable(main src/main.cpp)
target_link_libraries(main src) # link src