#include <iostream>
int shrjum(int a,int s) {
    if (a != 0) {
        s=10*s+a%10;
        a=a/10;
        return shrjum(a,s);
    } else {
        return s;
    }
}

int main() {
    int number,itog=0;
    std::cout << "Enter Number \n";
    std::cin >> number;
    shrjum(number,itog);
    if (number == shrjum(number, itog)) {
        std::cout << "This number is Palindrom \n";
    } else {
        std::cout << "This number is NOT Palindrom \n";
    }
    return 0;
}
