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

add_library(FileForgeCore)

target_sources(
    FileForgeCore
    PRIVATE 
        src/FileForgeCore.cpp 
        
    PUBLIC 
    FILE_SET public_headers
    TYPE HEADERS 
    BASE_DIRS
        include/FileForgeCore
    FILES 
        include/FileForgeCore/FileForgeCore.hpp
)

target_link_libraries(
    FileForge
    PRIVATE 
    FileForgeCore   
)

target_include_directories(
    FileForgeCore
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}/include   
)