#ifndef pic10b_vector_h
#define pic10b_vector_h

#include <iostream>
#include <string>

namespace pic10b {
    template <class T>
    class vector{
    private:
        T* the_data;
        size_t the_size;
        size_t the_capacity;
        static const int INIT_CAP = 10;
        void reserve( size_t new_capacity );
    public:
        bool empty() const;
        size_t size() const;
        size_t capacity() const;
        double front() const;
        double back() const;
        double at( size_t index ) const;
        double& operator[]( size_t index );
        double operator[]( size_t index ) const;
        void dump_data_to( std::ostream& out ) const;
        void dump_data() const;
        void push_back( double new_value );
        void pop_back();
    };
}


#endif /* pic10b_vector_h */
