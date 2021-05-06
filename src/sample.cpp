//
// Created by admin on 2021/5/6.
//
#include <iostream>
#include "sample.h"
#include "duckdb/query.h"
#include "duckdb/select.h"

void demo() {
    std::cout<<"This is a query function\n";
    query();
    select();
}
