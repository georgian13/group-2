#include <iostream>
#include <string>
int main() {
    int a, myage, pairage;
    std::string myname, pairname;
    std::cout << "What is your name?:";
    std::cin >> myname;
    std::cout << "How old are you?: ";
    std::cin >> myage;
    std::cout << "What is your pair name?:";
    std::cin >> pairname;
    std::cout << "How old are  your pair?: ";
    std::cin >> pairage;
        a = ((myname == "Hrach" && myage == 20)||(pairname == "Lilit" && pairage == 19)) ? 1 : 0;
            std::cout <<"a = "<< a << std::endl;
    return 0;
}

