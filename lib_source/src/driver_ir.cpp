#include <iostream> // std :: cout , std :: endl
#include <iterator> // std :: begin () , std :: end ()
#include "../include/int_ranges.h"
using namespace std;

// g++ -std=c++11 ./src/driver_ir.cpp ./src/int_ranges.cpp -I ./include

int main () {
    int vetor[] = {-2, -8, 2, 7, -3, 10, 1, 0, -3, 7};

    cout << *ir::compact(begin(vetor), end(vetor)) << endl;    

    return 0;
}