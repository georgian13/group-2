#include <iostream>
#include <string.h>
struct Person {
    std::string name;
    std::string lastName;
    int age;
    int gender;
    bool student;
    bool famaly;
    void rezult(std::string Name, std::string LastName, int Age, int Gender, bool Student, bool Famaly) {
        name = Name;
        lastName = LastName;
        age = Age;
        gender = Gender;
        student = Student;
        famaly = Famaly;
    }
    void print() {
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
};

int status(Person *parray, std::string anun, int size) {
    for (int i = 0; i < size; i++) {
        if (anun == parray[i].name) {
            parray[i].print();
            return i;
        }
    }
    std::cout <<"Error !!!\n";
    return -1;
}
