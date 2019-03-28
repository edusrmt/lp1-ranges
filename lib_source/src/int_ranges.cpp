#include "../include/int_ranges.h"
#include <iostream>

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

    value_type * copy(const value_type *first, const value_type *last, value_type *d_first)
    {
        while(first != last) {
            *d_first = *first;
            ++d_first;
            ++first;
        }

        return d_first;
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

    void rotate(value_type *first, value_type *n_first, value_type *last )
    {
        reverse(first, n_first);
        reverse(n_first, last);
        reverse(first, last);
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

    value_type * unique (value_type *first, value_type *last) {
        value_type *newLast = first;
        value_type *fixFirst = first;

        while (first != last) {
            if(std::find(fixFirst, newLast, *first) == newLast) {
                *newLast = *first;
                ++newLast;
            }

            ++first;
        }

        return newLast;
    }

    value_type * sort_marbles (value_type *first, value_type *last) {
        value_type *left = first;
        value_type *right = last - 1;

        while (left < right) {
            if(*left == 1) {
                std::swap(*left, *right);
                --right;
            } else
                ++left;
        }

        return right;
    }

    void partition (value_type *first, value_type *last, value_type *pivot) {
        value_type *left = first;
        value_type *middle = first;
        value_type *right = last - 1;
        value_type pivot_value = *pivot;

        while (middle <= right) {
            if (*middle < pivot_value)
                std::swap(*left++, *middle++);
            else if (*middle == pivot_value)
                ++middle;
            else 
                std::swap(*middle, *right--);
        }
    }
}
