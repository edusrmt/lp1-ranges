#include "../include/int_ranges.h"

namespace ir {
    void negate(value_type * first, value_type * last)
    {
        while(first != last)
            *first++ *= -1;
    }

    const value_type * min(const value_type* first, const value_type* last)
    {   
        const value_type *min = first++;
        while (first != last) {
            if (*first < *min)
                min = first;

            ++first;
        }

        return min;
    }

    value_type * copy( const value_type * first_, const value_type *last_, value_type *d_first_ )
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

    value_type * rotate( value_type *first, value_type *n_first, value_type *last )
    {
        // TODO: place your code solution here!
        return nullptr;
    }

    // TODO: Place the rest of the implementation here.


}
