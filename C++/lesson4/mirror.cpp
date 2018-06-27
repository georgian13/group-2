#include <iostream>
unsigned int mirror(int a,int n) {
    if ( a != 0 ) {
        n = 10*n + a % 10;
        a = a / 10;
    return mirror(a,n);
    } else {
        return n;
    }
}

int main() {
    int b, k = 0;
    std::cout << "Enter unsigned number \n";
    std::cin >> b;
    if ( b > 0 ) {
        std::cout << "Mirror number => " << mirror(b,k) << std::endl;
    } else {
        std::cout << "This number is signed or zero \n" ;
    }
    return 0;
}
