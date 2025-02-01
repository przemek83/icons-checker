cmake_minimum_required(VERSION 3.16)

project(icons-checker
    LANGUAGES CXX
    VERSION 1.0.0
    DESCRIPTION "Small Qt application showing available icons for current OS."
    HOMEPAGE_URL "https://github.com/przemek83/icons-checker")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(CODE_COVERAGE "Collect coverage" OFF)

if(CODE_COVERAGE)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0 --coverage")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 --coverage")
endif()

find_package(Qt6 REQUIRED COMPONENTS Widgets Core)
qt_standard_project_setup()

set(${PROJECT_NAME}_SOURCES
    main.cpp
    Widget.h
    Widget.cpp
)

set(UI
    Widget.ui
)
source_group("UI Files" FILES ${UI})

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_SOURCES} ${UI})
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Core Qt6::Widgets)
