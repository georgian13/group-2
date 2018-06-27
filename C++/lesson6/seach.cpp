#include <iostream>
#include <cstdlib>
int main() {
    int n,array[20],j=0;
    std::cout <<"Input number 1-100 diapazone :: ";
    std::cin >> n;
    for (int i=0; i<20; i++) {
        array[i] = 1 + rand()%100;
        std::cout << array[i] <<"  ";
    }
    std::cout <<'\n';
    for (int i=0; i<20; i++) {
        if (n == array[i]) {
            j = i + 1;
        }
    }
    if (j == 0) {
        std::cout <<"aydpisi tiv chka zangvacum\n";
    } else {
        std::cout << n <<" tvic zangvacum ka hetevyal indeqsov tary "<< j <<'\n';
    }
    return 0;
}
