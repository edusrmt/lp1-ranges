#include <iostream> // cout, endl
#include <iterator> // begin, end
#include <sstream>  // ostringstream
#include <algorithm> // for_each

#include "int_ranges.h"

std::string print( const int* first, const int* last )
{
    std::ostringstream oss;

    oss << "[ ";
    std::for_each(first, last, [&](const int & a){ oss << a << " ";} );
    oss << "]";
    return oss.str();
}

int main (void)
{
    int A[] = {1, 2, -3, -4, 5, -6, 7, 8, -9};

    std::cout << ">>> Original A: " << print(std::begin(A), std::end(A)) << std::endl;

// Negate
    ir::negate( std::begin(A), std::end(A) );
    std::cout << ">>> Negate:     " << print(std::begin(A), std::end(A)) << std::endl;
// Min
    std::cout << ">>> Min:        " << *ir::min(std::begin(A), std::end(A)) << std::endl;
// Copy
    ir::copy(std::begin(A), std::begin(A) + 3, std::begin(A) + 3);
    std::cout << ">>> Copy:       " << print(std::begin(A), std::end(A)) << std::endl;
// Reverse
    ir::reverse(std::begin(A), std::end(A));
    std::cout << ">>> Reverse:    " << print(std::begin(A), std::end(A)) << std::endl;
// Rotate
    ir::rotate(std::begin(A), std::begin(A)+3, std::end(A));
    std::cout << ">>> Rotate:     " << print(std::begin(A), std::end(A)) << std::endl;
// Scalar Multiplication
    ir::scalar_multiplication(std::begin(A), std::end(A), -2);
    std::cout << ">>> Scalar:     " << print(std::begin(A), std::end(A)) << std::endl;
// Dot Product
    std::cout << ">>> Dot:        " << ir::dot_product(std::begin(A), std::begin(A) + 3, std::begin(A) + 3) << std::endl;
// Compact    
    int *newLast = ir::compact(std::begin(A), std::end(A));
    std::cout << ">>> Scalar:     " << print(std::begin(A), newLast) << std::endl;
// Unique
    newLast = ir::unique(std::begin(A), newLast);
    std::cout << ">>> Unique:     " << print(std::begin(A), newLast) << std::endl;
// Partition
    ir::partition(std::begin(A), newLast, std::begin(A));
    std::cout << ">>> Partition:  " << print(std::begin(A), newLast) << std::endl;
// Sort Marble
    int M[] = {0, 0, 1, 0, 1, 1, 0, 0, 1};
    std::cout << ">>> New A:      " << print(std::begin(M), std::end(M)) << std::endl;
    ir::sort_marbles(std::begin(M), std::end(M));
    std::cout << ">>> Marble:     " << print(std::begin(M), std::end(M)) << std::endl;
}