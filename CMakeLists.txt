cmake_minimum_required(VERSION 3.23)
project(Ukol)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Aviation)

add_executable(Ukol main.cpp)

target_link_libraries(Ukol Aviation)
target_include_directories(Ukol PUBLIC Aviation/include)
