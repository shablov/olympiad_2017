cmake_minimum_required(VERSION 2.8)

project(olympiad_09_01_2017)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCES
    task_1_1.cpp
    task_1_2.cpp
    task_1_3.cpp
    task_1_4.cpp
    task_2_1.cpp
    task_2_2.cpp
    task_2_3.cpp
    task_2_4.cpp
    main.cpp
    )

add_subdirectory(googletest)

include_directories(${CMAKE_SOURCE_DIR}/googletest/googletest/include)

enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} gtest gtest_main)
