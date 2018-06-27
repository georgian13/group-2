#include <iostream>
int main() {
    int i, j;
    int centr, barcr;
    std::cin >> barcr;
    centr = barcr / 2;
    for ( i = 0; i <= centr; i++ ) {
        for ( j = barcr ; j >=0; j--) { 
            if ( (j >= centr + i) && (j <= centr - i) ) {
                    std::cout << "*";
                } else {
                    std::cout << " ";
                }
        }
        std::cout << "\n";
    }
    return 0;
}
