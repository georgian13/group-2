#include <iostream>
#include <string>
    void spring() {
        std::cout << "spring" << std::endl;
    }

    void summer() {
        std::cout << "summer" << std::endl;
    }

    void autumn() {
        std::cout << "autumn" << std::endl;
    }

    void winter() {
        std::cout << "winter" << std::endl;
    }

    int main() {
        std::cout << "Type any name of month " << std::endl;
        std::string a;
        std::cin >> a;
        if (a == "january" || a == "february" || a == "december" ) {
            winter();
        } else if (a == "march" || a == "april" || a == "may" ) {
            spring();
        } else if (a == "september" || a == "october" || a == "november" ) {
            autumn();
        } else if (a == "june" || a == "july" || a == "august" ) {
            summer();
        } else 
            std::cout << "You haven't written a name of month." << std::endl;
     return 0;
}
        

