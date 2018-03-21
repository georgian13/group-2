#include <iostream>
#include <string>
int main() {
	int a;
	int age;
	std::cout<<"How old are you? "<<std::endl;
	std::cin>>age;
		if (age < 10 || age > 60) {
			a=1;
		}
		else {
			a=0;
		}
		std::cout<<a<<std::endl;
	return 0;
	}
