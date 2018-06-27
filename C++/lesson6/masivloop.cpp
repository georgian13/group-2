#include <iostream>
#include <cstdlib>
int main() {
    int value,size = 10;
    int array[10];
    for (int i = 0; i<size; i++) {
        array[i]= 1 + rand() % 100;
        std::cout <<array[i]<<" ";
    }
    for (int j = 1; j < size; j++) {
        value = array[j];
        int index = j;
        while((index > 0) && (array[index-1] > value)) {
            array[index] =  array[index - 1];
            index--;
        }
    array[index] = value;
    }
    std::cout <<"Sortavorvac zangvacn e => \n";
    for (int i =0; i < size; i++) {
        std::cout <<array[i]<<" ";
    }
        std::cout <<'\n';
    return 0;
}
