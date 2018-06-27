#include <iostream>
int main() {
    int i, j;
    int centr, barcr;
    std::cin >> barcr;
    centr = barcr / 2;
    for ( i = 0; i <= barcr/2; i++ ) {
        for ( j = 0 ; j <=barcr; j++ ) { 
                if ( (j>= centr - i) && (j<= centr + i) ) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
        }
        std::cout << "\n";
    }
    return 0;
}
