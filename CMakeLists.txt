cmake_minimum_required(VERSION 3.15)
project(KnowledgeTree)

file(GLOB_RECURSE src src/*.cpp src/*.hpp)
file(GLOB_RECURSE tests tests/*.cpp tests/*.hpp)

add_executable(output ${src})
add_executable(test ${tests})

target_compile_options(output PUBLIC -std=c++17)
target_compile_options(test PUBLIC -std=c++17)

add_custom_target(run-test
    COMMAND cmake . && make && ./test --success
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)

add_custom_command(TARGET run-test
    COMMENT "Tests finish"
)