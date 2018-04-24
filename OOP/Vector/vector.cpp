#ifndef VECTOR_CPP
#define VECTOR_CPP
#include <iostream>
#include "vector.h"

Vector::Vector(unsigned int size) {
        v_size = 2 * size;
        v_array = new int [v_size];
}
Vector::Vector(const Vector& coppy)
    :v_size(coppy.v_size)
    {
        this->v_array = new int[v_size];
        for (unsigned int i = 0; i < v_size; i++) {
            v_array[i] = coppy.v_array[i];
        }
}
Vector::~Vector(){
        delete [] v_array;
}
int& Vector::operator[](unsigned int index) {
    if (index > v_size) {
        std::cout << "Error!";
        return -1;
    }
    return v_array[index];
}
int Vector::resize(unsigned int m) {
    m = 2 * m;
    if (m < v_size) {
        for (unsigned int i = m; i < v_size; ++i) {
            v_array[i] = 0;
        }
        return -1;
    } else if (m == v_size) {
        return -1;
    }
    int *array = new int[m];
    for (int i = 0; i < v_size; ++i) {
        array[i] = v_array[i];
    }
    delete [] v_array;
    v_array = array;
    v_size = m;
    return 0;
}
unsigned int Vector::size() {
    return v_size;
}
void Vector::insert (unsigned int index, double a) {
    for (unsigned int i = v_size - 1; i > index; --i) {
        v_array[i] = v_array[i - 1];
    }
    v_array[index] = a;
}
int Vector::find(double value) {
    for (unsigned int i = 0; i < v_size; i++) {
        if (v_array[i] == value) {
            return i;
        }
    }
    std::cout << "No this Value!";
    return -1;
}
void Vector::remove (unsigned int index) {
    if (index < v_size) {
        for (unsigned int i = index; i < v_size - 1; ++i) {
            v_array[i] = v_array[i+1];
        }
        v_array[v_size - 1] = 0;
    }
}
#endif
