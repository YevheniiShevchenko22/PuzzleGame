cmake_minimum_required(VERSION 3.17)
project(PuzzleGame)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(PuzzleGame main.cpp)

target_link_libraries(PuzzleGame sfml-graphics sfml-audio)