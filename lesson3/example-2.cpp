#include <iostream>
#include <string>
int main(){
	std::cout<<"Hello"<<std::endl;
	std::string name1;
	std::string name2;
	int age1,age2;
	std::cout<<"What is your name "<<std::endl;
	std::cin>>name1;
	std::cout<<"How old are you? "<<std::endl;
	std::cin>>age1;
	std::cout<<"Wait is not your turn "<<std::endl;
	std::cout<<"What is your name "<<std::endl;
	std::cin>>name2;
	std::cout<<"How old are you? "<<std::endl;
	std::cin>>age2;
	if(age1<age2){

		std::cout<<name1<<" is older than age "<<name2<<std::endl;
	}
	if(age1>age2){

		std::cout<<name1<<" younger than old "<<name2<<std::endl;
	}
	if(age1==age2){

		std::cout<<name1<<" age is equal "<<name2<<std::endl;
	}


}