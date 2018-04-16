#include <iostream>
unsigned long fib(unsigned long n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    for (int i = 0; i < 11; i++) {
        std::cout <<"fibonachi ( "<< i <<" ) = "<<fib(i)<<std::endl;
    }
    return 0;
}
