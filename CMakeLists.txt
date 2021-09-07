cmake_minimum_required(VERSION 3.0)
project(Agoravai)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS " -static -static-libgcc -static-libstdc++ -std=c++11")

add_custom_target(
        generate_analyzer_files
        ALL
        COMMAND py ${CMAKE_CURRENT_SOURCE_DIR}/scripts/generate_header.py
        BYPRODUCTS ${CMAKE_CURRENT_SOURCE_DIR}/header.h ${CMAKE_CURRENT_SOURCE_DIR}/header.cpp
        COMMENT "Generating analyzer files"
)

add_executable(Agoravai main.cpp Scanner.cpp Scanner.h header.cpp header.h)
add_dependencies(Agoravai generate_analyzer_files)