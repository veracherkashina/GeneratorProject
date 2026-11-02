cmake_minimum_required(VERSION 3.16)

project(GeneratorApp VERSION 0.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib)

add_executable(${CMAKE_PROJECT_NAME}
    src/main.cpp
)

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE generator_lib)
