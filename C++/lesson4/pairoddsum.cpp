#include <iostream>
unsigned int sum(int a) {
    if ( a > 0 ) {
        return a + sum(a-2);
    } else {
        return 0;
    }
}

int main() {
    int b;
    std::cout << "Enter unsigned number \n";
    std::cin >> b;
    if ( b > 0 ) {
        if ( b % 2 == 0 ) {
            std::cout << "1 - " <<   b << " pair summa equale " << sum(b) << std::endl;
            std::cout << "1 - " << ++b << " odd summa equale " << sum(--b) << std::endl;
        } else {
            std::cout << "1 - " <<   b << "  odd summa equale " << sum(b) << std::endl;
            std::cout << "1 - " << ++b << " pair summa equale " << sum(--b) << std::endl;
        }
    } else {
        std::cout << "This number is signed or zero \n" ;
    }
    return 0;
}
