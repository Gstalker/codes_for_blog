cmake_minimum_required(VERSION 3.4.1)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} C_SOURCES)

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(test_c ${C_SOURCES})