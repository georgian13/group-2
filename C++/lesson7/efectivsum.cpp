#include <iostream>
#include <cstdlib>
int main() {
    int n;
    std::cout <<"Input array size :: ";
    std::cin >> n;
    int* array = new int [n];
    int result = array[0], sum = 0;
    for (int i=0; i<n; i++) {
        array[i] = (rand()%20 +1) - 10;
        std::cout << array[i] <<"  ";
    }
    std::cout <<'\n';
    for (int i=0; i<n; i++) {
        sum += array[i];
        if (sum > result) {
            result = sum;
            continue;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    std::cout <<"Effectiv Summa = "<< sum <<'\n';
}
