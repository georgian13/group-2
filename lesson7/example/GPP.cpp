#include <iostream>
#include <string.h>
struct Person {
    std::string name;
    std::string lastName;
    int age;
    bool gender;
    bool student;
    bool famaly;
};
void print(*Name,*LastName,*Age, *Gender,*Student.*Famaly,int index) {
        if (gender == 1) {
            std::cout <<"Mister ";
        } else if (famaly) {
            std::cout <<"Miss ";
        } else {
            std::cout <<"Missis ";
        }
        std::cout << name << ' ' << lastName << ' ' << age << " years old ";
        if (gender == 1) {
            std::cout <<"Male ";
        } else {
            std::cout <<"Famale ";
        }
        if (student) {
            std::cout << " student\n";
        } else {
            std::cout << " no student\n";
        }
    }

int status(Person *parray, std::string anun, int size) {
    for (int i = 0; i < size; i++) {
        if (anun == parray[i]) {
            return i;
        }
    }
    std::cout <<"Error !!!\n";
    return -1;
}
