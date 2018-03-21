#include <iostream>
#include <string>
int main(){
    int age1, age2;
    std::string name1, name2;
    std::cout <<"Hello"<< std::endl;
    std::cout <<"What is your name?: ";
    std::cin>>name1;
    std::cout <<"How old are you?: ";
    std::cin>>age1;
    std::cout<<"Wait is not your turn "<<std::endl;
    std::cout<<"What is your pair name?: ";
    std::cin>>name2;
    std::cout<<"How old are you your pair ?: ";
    std::cin>>age2;
    if(age1>age2){
        std::cout << name1 <<" is older than age "<< name2 << std::endl;
    }
    if(age1<age2){
        std::cout << name1 <<" younger than old "<< name2 <<std::endl;
    }
    if(age1==age2){
        std::cout << name1 <<" age is equal "<< name2 <<std::endl;
    }


}
