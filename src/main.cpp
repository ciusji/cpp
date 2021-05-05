#include <iostream>
#include "sqlite3.h"

using namespace std;

sqlite3 * pDB = NULL;

int main() {
    std::cout << "Hello, World!" << std::endl;

    int nRes = sqlite3_open("~/test.db", &pDB);
    if (nRes != SQLITE_OK) {
        cout<<"Open Sqlite3 Failed"<<sqlite3_errmsg(pDB);
    }
    return 0;
}
