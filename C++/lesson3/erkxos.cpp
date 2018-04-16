#include <iostream>
#include <string>
    void question1() {
    	std::cout << " lav em du vonc es? " << std::endl;	
    }

    void question2() {
    	std::cout << " ha bayc shat djvara ba du? " << std::endl;
    }

     void question3() {
    	std::cout << " andznakanic norutyun chka nuyn anorosh vichakna... instigate Yndunvecir?" << std::endl;	
    }
    
    void question4() {
        std::cout << " ha araqich em ashxatum  " << std::endl;    
    }

    void question5() {
        std::cout << " eee erkar patmutyuna heto kpatmem...Mesropy stugec tnayint? " << std::endl;    
    }

    void question6() {
        std::cout << " parzaa...qnutyunnert parapum es? " << std::endl;    
    }
    
    void question7() {
        std::cout << " parap em ....uzum es durs ganq mi qich qaylenq ? " << std::endl;    
    }

    void question8() {
        std::cout << " de es qez kzangem hima chxangarem parapmunqit " << std::endl;    
    }
    int main() { 
    	std::string a,b;
    		std::cout << " harc 1 :: ";
    		std::cin >> a; 
    		if (a == "barev vonc es?") {
    			question1();
            } else {
                std::cout << " Error " << std::endl;
            }
            std::cout << " harc 2 :: ";
            std::cin >> a; 
            if (a == "barev vonc es?") {
                question2();
            } else {
                std::cout << " Error " << std::endl;
            }
            std::cout << " harc 3 :: ";
            std::cin >> a; 
            if (a == "barev vonc es?") {
                question3();
            } else {
                std::cout << " Error " << std::endl;
            }
            std::cout << " harc 4 :: ";
            std::cin >> a; 
            if (a == "barev vonc es?") {
                question4();
            } else {
                std::cout << " Error " << std::endl;
            }
            std::cout << " harc 5 :: ";
            std::cin >> a; 
            if (a == "ba xi araqich?") {
                question5();
            } else {
                std::cout << " Error " << std::endl;
            }
            std::cout << " harc 6 :: ";
            std::cin >> a; 
            if (a == "ha") {
                question6();
            } else {
                std::cout << " Error " << std::endl;
            }
            std::cout << " harc 7 :: ";
            std::cin >> a; 
            if (a == "ha esor irikun inches anum?") {
                question7();
            } else {
                std::cout << " Error " << std::endl;
            }
            std::cout << " harc 8 :: ";
            std::cin >> a; 
            if (a == "ha karelia") {
                question8();
            } else {
    			std::cout << " Error " << std::endl;
    		}
    	
    }
