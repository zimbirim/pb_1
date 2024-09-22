cmake_minimum_required(VERSION 3.20)

project(karel LANGUAGES CXX)

add_library(karel
    src/karel.cc
    src/robot.cc
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/..
    ${CMAKE_CURRENT_LIST_DIR}/src
)
