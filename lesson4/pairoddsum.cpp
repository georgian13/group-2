#include <iostream>
unsigned int pair_sum(int a) {
    if ( a > 0 ) {
        if ( a % 2 == 0 ) {
            return a + pair_sum(a-2);
        } else {
            pair_sum(--a);
        }
    }
}

unsigned int odd_sum(int a) {
    if ( a > 1 ) {
        if ( a % 2 == 1 ) {
            return a + odd_sum(a-2);
        } else {
            odd_sum(--a);
        }
    }
}

int main() {
    int b;
    std::cout << "Enter unsigned number \n";
    std::cin >> b;
    if ( b > 0 ) {
        pair_sum(b);
        std::cout << "1 - " << b << " pair summa equale " << pair_sum(b) << std::endl;
        odd_sum(b);
        std::cout << "1 - " << b << "  odd summa equale " << odd_sum(b) << std::endl;
    } else {
        std::cout << "This number is signed or zero \n" ;
    }
    return 0;
}
