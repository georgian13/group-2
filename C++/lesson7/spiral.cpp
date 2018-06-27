#include <iostream>
int main() {
    int n;
    std::cout <<"Input size or Matrix => ";
    std::cin >> n;
    int** array = new int*[n];
    for(int i = 0; i < n; i++) {
        array[i] = new int[n];
    }
    int number = n * n;
    int i = 1, j = 0;
    while(number) {
        for(j= i-1; j < n - i + 1; j++) {
            array[i-1][j] = number--;
        }
        for(j = i; j < n - i + 1; j++) {
            array[j][n - i] = number--;
        }
        for(j = n - i - 1; j >=i - 1; --j) {
            array[n - i][j] = number--;
        }
        for(j = n - i - 1; j >= i; j--) {
            array[j][i - 1] = number--;
        }
        i++;
    }
    for(int i=0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            std::cout << array[i][j] <<"  ";
        }
        std::cout <<'\n';
    }
    return 0;
}
