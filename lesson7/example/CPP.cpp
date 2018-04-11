#include <iostream>
#include "info.cpp"
int main() {
    std::cout << "Tigran, Nvard, Mariam, Edgar, Lilit, Hrach, Armen, Arpine, Ani, Artur, Miqael, Sasha, Nona\n";
    std::string anun;
    int size = 13;
    Person human[size];
    Person p;
    std::string Name[] = {"Tigran"," Nvard"," Mariam", "Edgar", "Lilit"," Hrach",
                    "Armen"," Arpine","Ani", "Artur"," Miqael"," Sasha"," Nona"};
    std::string LastName[] = {"Hovhannisyan","Harutyunyan","Karaperyan","Grigoryan","Melqumyan","Gevorgyan",
                    "Abrahamyan","Harutyunyan","Hakobyan","Gasparyan","Sargsyan","Avagyan","Musayelyan"};
    int Age[] = {20,19,21,17,19,21,19,23,19,26,17,19,19};
    bool Gender[] = {true,false,false,true,false,true,true,false,false,true,true,true,false};
    bool Student[] = {true,true,true,false,true,true,true,false,true,false,true,true,true};
    bool Famaly[] ={false,false,false,false,false,false,false,false,false,false,false,false,false};
    std::cout << "Input name : ";
    std::cin >> anun;
    int index = status(Name,anun,size);
    print(Name,LastName,Age,Gender,Student,Famaly,index);
}
