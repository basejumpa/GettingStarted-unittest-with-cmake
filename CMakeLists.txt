cmake_minimum_required (VERSION 2.8.12)

project (MyAwesomeProject)

# ...

add_subdirectory(src)

# ...

add_executable(MyAwesomeProject src/main.cpp)
target_link_libraries (MyAwesomeProject common)
