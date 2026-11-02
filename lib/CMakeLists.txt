cmake_minimum_required(VERSION 3.16)

project(generator_lib VERSION 0.0.0 LANGUAGES C CXX)

add_library(${CMAKE_PROJECT_NAME}
    src/ElectricGenerator.cpp
    src/PetrolGenerator.cpp
    src/InverterGenerator.cpp
)

target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
