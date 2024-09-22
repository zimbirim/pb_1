cmake_minimum_required(VERSION 3.20)

project(robot LANGUAGES CXX)


add_subdirectory(cpputils/karel)
add_subdirectory(cpputils/graphics)

add_executable(${PROJECT_NAME}
    src/main.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    karel
    image
)
