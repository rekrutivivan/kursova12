cmake_minimum_required(VERSION 3.23)
project(kursova)

set(CMAKE_CXX_STANDARD 14)

add_executable(kursova main.cpp Organization.cpp Organization.h kafedra.cpp kafedra.h university.cpp university.h)
