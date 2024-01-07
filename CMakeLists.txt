cmake_minimum_required(VERSION 3.26)
project(DataStrcut_labyrinthos)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/opt/homebrew")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(untitled142 Source/src/main.cpp
        Source/src/mainwindows.cpp
        Source/inc/mainwindows.h
        Source/UI/mainwindows.ui
        Source/inc/Matrix_lab.h
        Source/src/Matrix_lab.cpp
        Source/inc/Matrix_lab.h)

include_directories(

        ${PROJECT_SOURCE_DIR}/lib

        ${PROJECT_SOURCE_DIR}/Source/inc

)

target_link_libraries(untitled142
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

