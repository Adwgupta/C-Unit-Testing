cmake_minimum_required(VERSION 3.17)
project(ass1 C)

set(CMAKE_C_STANDARD 99)

find_library(CUNIT libcunit.dll.a C:/cygwin64/lib)
include_directories(C:/cygwin64/usr/include/ .)

add_executable(ass1
               main.c
               avg_and_max.c
               avg_and_max.h)

target_link_libraries(ass1 PUBLIC ${CUNIT})