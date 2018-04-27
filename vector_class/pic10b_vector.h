#ifndef pic10b_vector_h
#define pic10b_vector_h

#include <iostream>

namespace pic10b{
    template <class my_type>
    my_type get_max (my_type a, my_type b) {
        my_type result;
        result = (a>b)? a : b;
        return (result);
    }
}


#endif /* pic10b_vector_h */
