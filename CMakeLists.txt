cmake_minimum_required(VERSION 3.0)

project(game)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


SET(SOURCE_FILES
    src/main.cpp
    src/app.cpp
    src/top_down_view.cpp
    src/data_types.cpp
    )



add_executable(game ${SOURCE_FILES})

include_directories(include)
target_link_libraries(game raylib GL pthread dl rt X11)
