#include <iostream>
#include <cmath>
int main() {
    int age, size = 13;
    std::cout <<"Input Age :: ";
    std::cin >>age;
    int array[size] = {19,17,16,21,21,21,19,18,23,25,19,21,20};
    int masiv[size];
    int n;
    int m = std::abs(age - array[0]);
    for(int i = 1; i < size; i++) {
        masiv[i] = std::abs(age - array[i]);
        if(m > masiv[i]) {
            m = masiv[i];
            n = array[i];
        }
    }
    if(age >= n) {
        std::cout <<"Amenamot tariqy = "<< age - m <<'\n';
    } else {
        std::cout <<"Amenamot tariqy = "<< age + m <<'\n';
    }
    return 0;
}
