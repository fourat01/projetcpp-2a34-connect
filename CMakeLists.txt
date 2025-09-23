cmake_minimum_required(VERSION 3.16)

project(content_creators_manger VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets Core)

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

qt_add_executable(content_creators_manger
    ${PROJECT_SOURCES}
)

target_link_libraries(content_creators_manger PRIVATE Qt6::Widgets Qt6::Core)

set_target_properties(content_creators_manger PROPERTIES
    WIN32_EXECUTABLE FALSE
)
