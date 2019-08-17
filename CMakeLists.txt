cmake_minimum_required(VERSION 3.15)
project(KnowledgeTree)

file(GLOB_RECURSE src src/*.cpp src/*.hpp)
file(GLOB_RECURSE tests tests/*.cpp tests/*.hpp)

add_executable(output ${src})
add_executable(test ${tests})

target_compile_options(output PUBLIC -std=c++17)
target_compile_options(test PUBLIC -std=c++17)