#include <iostream>
#include <string>
int main() {
	int a;
	std::string name;
	int age;
	std::cout<<"What is your name? "<<std::endl;
	std::cin>>name;
	std::cout<<"How old are you? "<<std::endl;
	std::cin>>age;
	if (name == "Lilit" && age == 19) {
		a=1;
	}
	else {	
		a=0;
	}
	std::cout<<a<<std::endl;
return 0;
}
