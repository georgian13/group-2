#include <iostream>
unsigned int summa(int a) {
    if ( a > 0) {
        return a + summa(a-1);
    }
}

int main() {
    int b;
    std::cout << "Enter unsigned number \n";
    std::cin >> b;
    if ( b > 0 ) {
        summa(b);
        std::cout << "1 - " << b << " summa equale " << summa(b) << std::endl;
    } else {
        std::cout << "This number is signed or zero \n" ;
    }
    return 0;
}
