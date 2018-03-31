#include <iostream>
long int num(int n,int k) {
    if ( k > 0 ) {
        return n * num(n, --k);
    }else {
        return 1;
    }
}

int main() {
    int n, k;
    std::cout << "Enter N number \n";
    std::cin >> n;
    std::cout << "Enter K number \n";
    std::cin >> k;
    if ( n != 0 ) {
        if ( k == 0 ) {
            std::cout << n << " ^ " << k << " = 1 \n";
        } else {
            num(n, k);
            std::cout << n << " ^ " << k << " = "<< num(n, k) << std::endl;
        }
    } else {
        std::cout << "NO REZULTAT \n";
    }
    return 0;
}
