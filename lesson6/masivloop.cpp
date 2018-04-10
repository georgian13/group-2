#include <iostream>
#include <cstdlib>
int main() {
    int n,array[20]={2,4,5,10,12,13,21,45,55,59,61,65,67,69,78,82,86,94,97,99};
    std::cout <<"Input number 1-100 diapazone :: ";
    std::cin >> n;
    for (int i=0; i<20; i++) {
        std::cout << array[i] <<"  ";
    }
    std::cout <<'\n';
    int i = 10;
    while (array[i] != n) {
        if (array[i] == n) {
            std::cout << n <<" tvic zangvacum ka hetevyal indeqsov tary "<< i+1 <<'\n';
        } else if(n<array[i]) {
            i = i/2;
        } else if(n>array[i]) {
            i = 2*i;
        }
    }
    return 0;
}
