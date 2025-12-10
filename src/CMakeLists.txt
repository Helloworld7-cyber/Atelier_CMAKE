add_subdirectory(lib)
add_executable(calculator main.c)
target_link_libraries(calculator lib)
# Dans le CMakeLists.txt qui contient 'add_library(lib ...)'

target_include_directories(lib PUBLIC
    ${PROJECT_SOURCE_DIR}/include # CECI EST CRITIQUE POUR TROUVER calculator.h
)
