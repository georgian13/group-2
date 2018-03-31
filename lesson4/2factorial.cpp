#include <iostream>
unsigned long factorial(int a) {
    if ( a <= 1 ) {
        return 1;
    } else {
        return a * factorial(a-2);
    }
}

int main() {
    int b;
    std::cout << "Enter unsigned number \n";
    std::cin >> b;
    if ( b >= 0 ) {
        factorial(b);
        std::cout << b << " !! = " << factorial(b) << std::endl;
    } else {
        std::cout << "This number is signed \n" ;
    }
    return 0;
}
