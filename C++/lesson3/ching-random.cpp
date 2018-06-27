#include <iostream>
#include <string>
#include <stdlib.h>
    void rez1() {
    	std::cout << " point go to player " << std::endl;	
    }

    void rez2() {
    	std::cout << " points go tu computer " << std::endl;
    }

     void rez3() {
    	std::cout << " no points " << std::endl;	
    }

    void game() {
        int p = 0, c = 0;
        int b;
        std::string a;
        for (int i = 0; i < 3; i++){
            std::cout << "player 1 nermuceq qar?tuxt? kam mkrat? --> ";
            std::cin >> a; 
            b = 1 + rand()%3;
            if ((a == "qar" && b == 1) || (a == "tuxt" && b == 2) || (a == "mkrat" && b == 3)) {
                rez3();

            } else if ((a == "qar" && b == 3) || (a == "tuxt" && b == 1)|| (a == "mkrat" && b == 2)) {
                rez1();
                p++;
                
            } else if ((a == "qar" && b == 2) || (a == "tuxt" && b == 3) || (a == "mkrat" && b == 1)) {
                rez2();
                c++;
            
            } else {
                std::cout << " Error " << std::endl;
            }
        }
        if (p > c) {

            std::cout << " player  win " << std::endl;
        } else if (c > p) {

            std::cout << " computer win " << std::endl; 
        } else {

            std::cout << " DRAW" << std::endl;
        }
    }

    int main() {
    	game();
        return 0;
    }
