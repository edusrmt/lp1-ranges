#ifndef RANGE_LIB_H
#define RANGE_LIB_H

#include <iterator> // distance
#include <algorithm> // swap

namespace ir {
    using value_type = int;

    /// Negate all integer values in [first;last).
    void negate( value_type * first, value_type * last );

    /// Returns a pointer to the first occurrency of the smallest element the range.
    const value_type * min( const value_type *, const value_type * );

    /*!
     * \brief Copy the content of the range `[first;last)` to another range beginning at `d_first`.
     * \return An iterator point to the element past the last element copied from the source range.
     */
    value_type * copy( const value_type * , const value_type *, value_type* );


    /// Reverse the order of the elements in range `[first;last)`.
    void reverse( value_type *first, value_type*last );

    /// Rotate elements in range.
    value_type * rotate( value_type *first, value_type *n_first, value_type *last );

    /// Multiply all elements of array by `scalar` in range `[first;last)`
    void scalar_multiplication(value_type *first, value_type *last, int scalar);

    /// Return scalar product between two vectors in range `[first;last)`
    value_type dot_product (value_type *a_first, const value_type *a_last, const value_type *b_first);

    /// Compact array in range `[first;last)` and returns new last pointer.
    value_type * compact (value_type *first, value_type *last);
}
#endif
