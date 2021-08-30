cmake_minimum_required(VERSION 3.0)
project(LexicalAnalysis)

set(CMAKE_CXX_STANDARD 11)

add_executable(LexicalAnalysis main.cpp Scanner.cpp Scanner.h header.cpp header.h)
