cmake_minimum_required(VERSION 3.50)
project(MScales CXX)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(scales 
  src/main.cpp
  src/scale.cpp
  src/scale.hpp
  src/command-argument-parser.hpp
  src/command-argument-parser.cpp
)

