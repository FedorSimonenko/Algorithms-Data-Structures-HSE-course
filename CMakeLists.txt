cmake_minimum_required(VERSION 3.20)

project(ADS-HSE VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF) 

enable_testing()

file(GLOB_RECURSE SORTING_SRC "algorithms/sorting/*.cpp")
file(GLOB_RECURSE SEARCHING_SRC "algorithms/searching/*.cpp")

add_library(algorithms STATIC
    ${SORTING_SRC}
    ${SEARCHING_SRC}
)

target_include_directories(algorithms PUBLIC algorithms)

file(GLOB_RECURSE TASK_SOURCES "problems/contests/*.cpp" "tests/*.cpp")
foreach(TASK_FILE ${TASK_SOURCES})
    get_filename_component(TASK_NAME ${TASK_FILE} NAME_WE)
    add_executable(${TASK_NAME} ${TASK_FILE})
    target_link_libraries(${TASK_NAME} algorithms)
    target_include_directories(${TASK_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/algorithms)
endforeach()