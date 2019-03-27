#include <iostream> // std :: cout , std :: endl
#include <iterator> // std :: begin () , std :: end ()
#include "../include/int_ranges.h"
using namespace std;

// g++ -std=c++11 ./src/driver_ir.cpp ./src/int_ranges.cpp -I ./include

int main () {
    int A[] = {1 , 2 , 1 , 2 , 3 , 3 , 1 , 2 , 4 , 5 , 3 , 4 , 5};

    auto last = ir::unique(begin(A), end(A));

    for (auto i(begin(A)); i != last; ++i) {
        cout << *i << " ";
    }

    cout << endl;
    return 0;
}