#include <iostream>
#include "prog.cpp"
int main() {
    Circle A;
    std::cout << "L = " << A.Circle_L(5) << '\n';
    std::cout << "S = " << A.Circle_S(5) << '\n';
    std::cout << "A = " << A.operator*(2) << '\n';
    return 0;
}
