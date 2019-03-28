#include <iostream> // std :: cout , std :: endl
#include <iterator> // std :: begin () , std :: end ()
#include "../include/int_ranges.h"
using namespace std;

// g++ -std=c++11 ./src/driver_ir.cpp ./src/int_ranges.cpp -I ./include

int main () {
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ir::rotate(begin(A), begin(A)+3, end(A));

    for (int e : A) {
        cout << e << " ";
    }

    cout << endl;

    return 0;
}