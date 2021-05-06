add_subdirectory(duckdb duckdb_lib)
link_directories(duckdb_lib)

add_library(src SHARED main.cpp sample.cpp)

target_link_libraries(src duckdb)