#include <iostream>
#include "info.cpp"
int main() {
    std::cout << "Tigran, Nvard, Mariam, Edgar, Lilit, Hrach, Armen, Arpine, Ani, Artur, Miqael, Sasha, Nona\n";
    std::string anun;
    int size = 13;
    Person human[size];
    Person &Tigran = human[0], &Nvard = human[1], &Mariam = human[2], &Edgar = human[3], &Lilit = human[4];
    Person &Hrach  = human[5], &Armen = human[6], &Arpine = human[7], &Ani   = human[8], &Artur = human[9];
    Person &Miqael = human[10],&Sasha = human[11],&Nona   = human[12];
    Tigran.rezult("Tigran", "Hovhannisyan", 20, 1,true,false);
    Nvard.rezult("Nvard","Harutyunyan", 19, 0, true,false);
    Mariam.rezult("Mariam","Karapetyan", 21, 0, true,false);
    Edgar.rezult("Edgar","Grigoryan", 17, 1, false,false);
    Lilit.rezult("Lilit","Melqumyan", 18, 0, true,false);
    Hrach.rezult("Hrach","Gevorgyan", 21, 1, true,false);
    Armen.rezult("Armen","Abrahamyan", 19, 1, true,false);
    Arpine.rezult("Arpine","Harutyunyan", 23, 0, false,false);
    Ani.rezult("Ani","Hakobyan", 19, 0, true,false);
    Artur.rezult("Artur","Gasparyan", 24, 1, false,false);
    Miqael.rezult("Miqael","Sargsyan", 17, 1, true,false);
    Sasha.rezult("Sasha","Avagyan", 18, 1, true,false);
    Nona.rezult("Nona","Musaelyan", 18, 0, true,false);
    std::cout << "Input name : ";
    std::cin >> anun;
    status(human, anun, size);
}
