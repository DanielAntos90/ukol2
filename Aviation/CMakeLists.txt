cmake_minimum_required(VERSION 3.23)
project(Aviation)

set(CMAKE_CXX_STANDARD 17)

add_library(Aviation
        src/crew_member.cpp
        include/crew_member.h
        include/airport.h
        src/airplane.cpp
        include/airplane.h
        )

target_include_directories(Aviation PUBLIC include)
