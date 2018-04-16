#include <iostream>
#include <string>
    void rez1() {
    	std::cout << " player 1 go to points" << std::endl;	
    }

    void rez2() {
    	std::cout << " player 2 go to points " << std::endl;
    }

     void rez3() {
    	std::cout << " DRAW no points" << std::endl;	
    }

    int main() {
    	int p1 = 0, p2 = 0;
    	std::string a, b;
    	for (int i = 0; i < 3; i++){
    		std::cout << "player 1 nermuceq qar?tuxt? kam mkrat? --> ";
    		std::cin >> a; 
    		std::cout << "player 2 nermuceq qar?tuxt? kam mkrat? --> ";
    		std::cin >> b;
    		if (a == b) {
    			rez3();
    		} else if (a == "qar" && b == "tuxt") {
    			rez2();
    			p2++;
    		} else if (a == "qar" && b == "mkrat") {
    			rez1();
    			p1++;

    		} else if (a == "mkrat" && b == "tuxt") {
    			rez1();
    			p1++;
    		} else if (a == "mkrat" && b == "qar") {
    			rez2();
    			p2++;
    		} else if (a == "tuxt" && b == "qar") {
    			rez1();
    			p1++;
    		} else if (a == "tuxt" && b == "mkrat") {
    			rez2();
    			p2++;
    		} else {
    			std::cout << " Error " << std::endl;
    		}
    	}
    	if (p1 > p2) {

    		std::cout << " player 1 win" << std::endl;
    	} else if (p2 > p1) {

    		std::cout << " player 2 win" << std::endl; 
    	} else {

    		std::cout << " DRAW" << std::endl;
    	}
    }
