cmake_minimum_required(VERSION 3.25)
project(Studentinformation)

set(CMAKE_CXX_STANDARD 17)

add_executable(Studentinformation main.cpp Student.cpp Student.h style.cpp)
