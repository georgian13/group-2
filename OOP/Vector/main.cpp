#include <iostream>
#include "vector.h"
#include "vector.cpp"
int main () {
    Vector v(10);
    v[0] = 2;
    v[1] = 13;
    v[5] = 20;
    v[2] = 3;
    v.print();
    std::cout << "Vector after insert`\n";
    v.insert(7,19);
    v.insert(10,4);
    v.print();
    std::cout <<"Remove => ";
    v.remove(1);
    std::cout <<'\n';
    std::cout <<v.find(21) << "Find =>  " <<'\n';
    v.resize(11);
    std::cout << v.size() <<'\n';
    return 0;
}
