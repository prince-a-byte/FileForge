cmake_minimum_required(VERSION 3.23)
project(FileForge LANGUAGES CXX)

add_executable(FileForge)
target_sources(
    FileForge
    PRIVATE 
        src/main.cpp   
)

target_compile_features(
    FileForge
    PRIVATE 
    cxx_std_17
)