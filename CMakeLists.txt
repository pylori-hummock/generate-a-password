# CMakeLists.txt
cmake_minimum_required(VERSION 3.12)
project(PasswordGenerator)

set(CMAKE_CXX_STANDARD 14)

add_executable(PasswordGenerator main.cpp password_generator.cpp utils.cpp)
