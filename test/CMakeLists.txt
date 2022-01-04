# Add catch as an interface library
set(CATCH_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/externals/Catch2/include)
set(CATCH_LIB_DIR ${CMAKE_SOURCE_DIR}/externals/Catch2/lib)
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CATCH_INCLUDE_DIR})

# Add test executable
add_executable (tests testmain.cpp testA.cpp testB.cpp)
target_link_libraries (tests Catch ${CATCH_LIB_DIR}/libCatch2.a)

add_test(NAME tests COMMAND tests)
enable_testing()
