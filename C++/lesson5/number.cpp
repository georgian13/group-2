#include <iostream>
int main() {
    int first, last, sum=0;
    std::cout << "Input first number :: ";
    std::cin >> first;
    std::cout << "Input last number :: ";
    std::cin >> last;
    if (( first < last)&&(first >=0) ) {
        for ( int i = first; i <= last; i++ ) {
            if ( i % 2 != 0 ) {
                sum = sum + i;
            }
        }
        std::cout << first <<" -ic "<< last <<" pair summa = "<< sum <<std::endl;
    } else {
        std::cout << "firs number big or equal is last number \n";
    }
    return 0;
}
