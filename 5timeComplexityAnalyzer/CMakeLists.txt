cmake_minimum_required(VERSION 3.29)
project(5timeComplexityAnalyzer)

set(CMAKE_CXX_STANDARD 20)

add_executable(5timeComplexityAnalyzer analyzer.cpp
        StringData.h)
