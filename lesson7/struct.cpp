#include <string>
#include <iostream>
struct Person {
    std::string name;
    std::string lastname;
    int age;
    bool student;
    std::string gender;
    std::string music;

};

Person info1(Person p) {
        p.name = "Hrach";
        p.lastname = "Gevorgyan";
        p.age= 21;
        p.student = true;
        p.gender = "Male";
        p.music = "Lirica";
        return p;
}
Person info2(Person p) {
        p.name = "Tigran";
        p.lastname = "Hovhannisyan";
        p.age= 20;
        p.student = true;
        p.gender = "Male";
        p.music = "Rabiz";
        return p;
}
Person info3(Person p) {
        p.name = "Nvard";
        p.lastname = "Harutyunyan";
        p.age= 19;
        p.student = true;
        p.gender = "Famale";
        p.music = "Jazz";
        return p;
}
Person info4(Person p) {
        p.name = "Arpine";
        p.lastname = "Harutyunyan";
        p.age= 23;
        p.student = false;
        p.gender = "Famale";
        p.music = "Rock";
        return p;
}
Person info5(Person p) {
        p.name = "Armen";
        p.lastname = "Abrahamyan";
        p.age= 19;
        p.student = true;
        p.gender = "Male";
        p.music = "Rabiz";
        return p;
}
Person info6(Person p) {
        p.name = "Lilit";
        p.lastname = "Melkumyan";
        p.age= 19;
        p.student = true;
        p.gender = "Famale";
        p.music = "Rock";
        return p;
}
Person info7(Person p) {
        p.name = "Ani";
        p.lastname = "Hakobyan";
        p.age= 19;
        p.student = true;
        p.gender = "Famale";
        p.music = "Lirica";
        return p;
}
Person info8(Person p) {
        p.name = "Artur";
        p.lastname = "Gasparyan";
        p.age= 26;
        p.student = false;
        p.gender = "Famale";
        p.music = "Jazz";
        return p;
}
Person info9(Person p) {
        p.name = "Sasha";
        p.lastname = "Avagyan";
        p.age= 19;
        p.student = true;
        p.gender = "Male";
        p.music = "Deep";
        return p;
}
Person info10(Person p) {
        p.name = "Nona";
        p.lastname = "Musayelyan";
        p.age= 19;
        p.student = true;
        p.gender = "Famale";
        p.music = "Latino";
        return p;
}
Person info11(Person p) {
        p.name = "Mariam";
        p.lastname = "Melkumyan";
        p.age= 21;
        p.student = true;
        p.gender = "Famale";
        p.music = "Lirica";
        return p;
}
Person info12(Person p) {
        p.name = "Miqael";
        p.lastname = "Sargsyan";
        p.age= 17;
        p.student = true;
        p.gender = "Male";
        p.music = "Rabiz";
        return p;
}
Person info13(Person p) {
        p.name = "Edgar";
        p.lastname = "Grigoryan";
        p.age= 17;
        p.student = false;
        p.gender = "Male";
        p.music = "Jazz";
        return p;
}
void inforezult(Person p) {
    std::cout << "\nITC student  Information.\n";
    std::cout << "\nName: " << p.name << '\n';
    std::cout << "LastName: " << p.lastname <<'\n';
    std::cout <<"Age: " << p.age << '\n';
    std::cout << "Student: " << p.student <<'\n';
    std::cout << "Gender: " << p.gender <<'\n';
    std::cout << "Love Music: " << p.music <<'\n';
}

int  main() {
    std::cout <<"ITC-STEPANAKERT-2 xmbum kan 13 usanox nrancic \n";
    std::cout <<"voreve meki masin informacia stanalu hamar nermuceq \n";
    std::cout <<"Anun Azganun formatov text :: \n";
    std::string name, lastname;
    Person p;
    std::cout << "Input name ::  ";
    std::cin >>name;
    std::cout << "Input lastname ::  ";
    std::cin >>lastname;
    if(name == "Hrach" && lastname == "Gevorgyan") {
        p = info1(p);
        inforezult(p);
    } else if(name == "Tigran" && lastname == "Hovhannisyan") {
        p = info2(p);
        inforezult(p);
    } else if(name == "Nvard" && lastname == "Harutyunyan") {
        p = info3(p);
        inforezult(p);
    } else if(name == "Arpine" && lastname == "Harutyunyan") {
        p = info4(p);
        inforezult(p);
    } else if(name == "Armen" && lastname == "Abrahamyan") {
        p = info5(p);
        inforezult(p);
    } else if(name == "Lilit" && lastname == "Melkumyan") {
        p = info6(p);
        inforezult(p);
    } else if(name == "Ani" && lastname == "Hakobyan") {
        p = info7(p);
        inforezult(p);
    } else if(name == "Artur" && lastname == "Gasparyan") {
        p = info8(p);
        inforezult(p);
    } else if(name == "Sasha" && lastname == "Avagyan") {
        p = info9(p);
        inforezult(p);
    } else if(name == "Nona" && lastname == "Musayelyanu") {
        p = info10(p);
        inforezult(p);
    } else if(name == "Mariam" && lastname == "Melkumyan") {
        p = info11(p);
        inforezult(p);
    } else if(name == "Miqael" && lastname == "Sargsyan") {
        p = info12(p);
        inforezult(p);
    } else if(name == "Edgar" && lastname == "Grigoryan") {
        p = info13(p);
        inforezult(p);
    } else {
        std::cout << "\nTexy chi hamapataxanum nermucvac Formati het \n";
    }
    return 0;
}
