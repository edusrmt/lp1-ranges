#include "../include/int_ranges.h"

namespace ir {
    void negate(value_type *first, value_type *last)
    {
        while(first != last) {
            *first *= -1;
            ++first;
        }
    }

    const value_type * min(const value_type *first, const value_type *last)
    {   
        const value_type *min = first++;
        while (first != last) {
            if (*first < *min)
                min = first;

            ++first;
        }

        return min;
    }

    value_type * copy(const value_type *first_, const value_type *last_, value_type *d_first_ )
    {
        // TODO: place your code solution here!
        return nullptr;
    }

    void reverse(value_type *first, value_type*last)
    {
        --last;
        while (first < last) {
            std::swap(*first, *last);
            ++first;
            --last;
        }
    }

    value_type * rotate(value_type *first, value_type *n_first, value_type *last )
    {
        // TODO: place your code solution here!
        return nullptr;
    }

    void scalar_multiplication(value_type *first, value_type *last, int scalar) {
        while(first != last) {
            *first *= scalar;
            ++first;
        }
    }

    value_type dot_product (value_type *a_first, const value_type *a_last, const value_type *b_first) {
        value_type product = 0;

        while (a_first != a_last) {
            product += *a_first * *b_first;
            ++a_first;
            ++b_first;
        }       

        return product;
    }

    value_type * compact (value_type *first, value_type *last) {
        value_type *newFirst = first;

        while (first != last) {
            if(*first > 0) {
                *newFirst = *first;
                ++newFirst;
            }
            
            ++first;
        }

        return newFirst;
    }
}
