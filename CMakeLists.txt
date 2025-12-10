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
# CMakeLists.txt (à la racine) - dans le bloc if(BUILD_TESTING)

if(BUILD_TESTING)
    # ... (Tests existants: t1, t2, t3, t4)

    # NOUVEAU TEST POUR LA FONCTION CARRÉ
    add_test(
        NAME Test_Carre
        COMMAND calculator car 5 
        WORKING_DIRECTORY src
    )
    set_tests_properties(Test_Carre 
        PROPERTIES PASS_REGULAR_EXPRESSION "25"
    )
endif()

