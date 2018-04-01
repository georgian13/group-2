#include <iostream>
unsigned int mirror(int a) {
    if ( a != 0 ) {
        int n;
        n = a % 10;
        std::cout << n <<" ";
        a = a / 10;
    return mirror(a);
    }
}

int main() {
    int b;
    std::cout << "Enter unsigned number \n";
    std::cin >> b;
    if ( b > 0 ) {
        std::cout << "Mirror number => " << mirror(b) << std::endl;
    } else {
        std::cout << "This number is signed or zero \n" ;
    }
    return 0;
}
