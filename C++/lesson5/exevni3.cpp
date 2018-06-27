#include <iostream>
int main() {
    for ( int i = 0; i < 10; i++ ) {
        for ( int j = 0 ; j < 10; j++ ) { 
            if ( j >= i ) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}
