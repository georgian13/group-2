#include <iostream>
#include <string>
bool word_pol(std::string bar, int j, int i=0) {
    if( i < j ) {
        if (bar[i] != bar[j]) {
            return false;
        } else {
            word_pol(bar, --j,++i);
        }
    }
}

int main() {
    std::string bar;
    std::cout << "Enter word : ";
    std::cin >> bar;
    int j = bar.length();
    if (word_pol(bar, --j)) {
        std::cout << "palindrom   e \n";
    } else {
        std::cout << "palindrom che \n";
    }
}
