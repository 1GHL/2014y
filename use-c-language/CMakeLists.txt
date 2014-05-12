cmake_minimum_required(VERSION 2.8)

project(use-c-language)

set (CMAKE_BUILD_TYPE Debug)

#add_executable(xx xx.c)
#include_directories(/usr/include)
#link_directories(/usr/lib)
#target_link_libraries(xx xxx)

add_executable(code_call_func usage_trancode_call_func.c)