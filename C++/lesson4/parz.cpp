#include <iostream>
bool parz(int a, int c = 2) {
    if ( c <= a / 2 ) {
        if ( a % c == 0 ) {
            return false;
        } else {
            return parz(a,++c);
        }
    }
}

int main() {
    int b;
    std::cout << "Enter unsigned number \n";
    std::cin >> b;
    if ( b > 0 ) {
        if ( b == 1 || b == 2 ) {
            std::cout << " PARZ e   \n";
        } else if ( parz( b )) {
            std::cout << " PARZ e   \n";
        } else {
            std::cout << " PARZ che     \n";
        }
    } else {
        std::cout << " Number is signed or zero \n";
    }
    return 0;
}
