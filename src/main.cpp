#include <iostream>
#include "sample.h"
#include "sqlite3.h"

sqlite3 * pDB = nullptr;

static int SimpleResult(void *NotUsed, int argc, char **argv, char **azColName) {
    for(int i = 0 ; i < argc ; i++)
    {
        std::cout << azColName[i] << " = " << (argv[i] ? argv[i] : "NULL") << ", ";
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    // process
    demo();

    // sqlite query
    int nRes = sqlite3_open("/Users/admin/test.db", &pDB);
    if (nRes != SQLITE_OK) {
        std::cout << "Open database failed: " << sqlite3_errmsg(pDB) << std::endl;
    } else {
        std::cout << "Open database success\n";
        char* cErrMsg;
        sqlite3_exec(pDB, "select * from test", SimpleResult, nullptr, &cErrMsg);
    }

    return 0;
}
