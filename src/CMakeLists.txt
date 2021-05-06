add_subdirectory(tinydb tinydb_lib)
link_directories(tinydb_lib)

add_library(src SHARED main.cpp sample.cpp)
target_link_libraries(src tinydb)

find_package(SQLite3 REQUIRED)
target_link_libraries(src SQLite::SQLite3)