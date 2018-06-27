#include <iostream>
int main() {
    int sum = 0, k= -1,last = 0;
    int i = 0;
    do {
        last = i;
        std::cout << "Enter Number :: " ;
        std::cin >> i;
        if (i % 2 != 0) {
            continue;
        }
            k++;
            sum  = sum + i;
    } while ( i != 0 ) ;
    std::cout <<"Sum = "  << sum << "\n";
    std::cout <<"Qanak = "<< k << "\n";
    std::cout <<"Last = " << last << "\n";
    return 0;
}
