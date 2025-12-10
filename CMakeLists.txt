cmake_minimum_required(VERSION 3.5)
project(calculator C)
add_subdirectory(include)
add_subdirectory(src)
include_directories(include)
enable_testing()
add_test(t1 src/calculator add 2 3)
add_test(t2 src/calculator sub 3 -2)
add_test(t3 src/calculator mul 5 5)
add_test(t4 src/calculator div 1 5)
# Dans le CMakeLists.txt qui contient 'add_library(lib ...)'

target_include_directories(lib PUBLIC
    ${PROJECT_SOURCE_DIR}/include # CECI EST CRITIQUE POUR TROUVER calculator.h
)
