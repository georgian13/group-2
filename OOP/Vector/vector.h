#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
class Vector {
    private:
        unsigned int v_size;
        int *v_array;
    public:
        Vector(unsigned int = 10);
        Vector( const Vector& coppy);
        ~Vector();
        int& operator[](unsigned int);
        int resize(unsigned int);
        unsigned int size();
        void insert (unsigned int, double);
        int find(double);
        void remove (unsigned int);
};
#endif
