#include <iostream>
#include <string.h>
struct Person {
    std::string name;
    std::string lastName;
    int age;
    char gender;
    bool student;
    bool famaly;
    void rezult(std::string Name, std::string LastName, int Age, char Gender, bool Student, bool Famaly) {
        name = Name;
        lastName = LastName;
        age = Age;
        gender = Gender;
        student = Student;
        famaly = Famaly;
    }
    void print() {
        if (gender == '1') {
            std::cout <<"\nMister ";
        } else if (famaly) {
            std::cout <<"\nMissis ";
        } else {
            std::cout <<"\nMiss ";
        }
        std::cout << name << ' ' << lastName << ' ' << age << " years old ";
        if (gender == '1') {
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
            return 0;
        }
    }
    std::cout <<"Error !!!\n";
}
