add_library(lib1 SHARED lib1.cpp)
add_library(lib2 SHARED lib2.cpp)
target_link_libraries(lib2 PRIVATE lib1)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE lib2)

