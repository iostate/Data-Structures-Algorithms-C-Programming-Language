cmake_minimum_required(VERSION 3.8)
project(Project2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        basiclist.c
        basiclist.h
        map.c
        map.h
        mapobject.c
        mapobject.h
        project2.c
        )

add_executable(Project2 ${SOURCE_FILES})