#include <iostream>
#include <string>
int main() {
	int a;
	std::string myname, pairname;
	int myage, pairage;
	std::cout<<"What is your name? "<<std::endl;
	std::cin>>myname;
	std::cout<<"How old are you? "<<std::endl;
	std::cin>>myage;
	std::cout<<"What is your pair name? "<<std::endl;
	std::cin>>pairname;
	std::cout<<"How old are your pair? "<<std::endl;
	std::cin>>pairage;
 		if ((myname == "Lilit" && myage == 19)||(pairname == "Hrach" && pairage == 20)) {
			a=1;
		}
		else {
			a=0;
		}	
		std::cout<<a<<std::endl;
	return 0;
}
