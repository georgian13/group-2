#include <iostream>
#include "info.cpp"
int main() {
    std::cout <<"Hello ITC-Stepanakert group 2 ...Here are the names of our students.\n";
    std::cout << "\nTigran, Nvard, Mariam, Edgar, Lilit, Hrach, Armen, Arpine, Ani, Artur, Miqael, Sasha, Nona\n";
    std::string anun;
    int size = 13;
    Person human[size];
    human[0].rezult("Tigran", "Hovhannisyan", 20, '1',true,false);
    human[1].rezult("Nvard","Harutyunyan", 19, '0', true,false);
    human[2].rezult("Mariam","Karapetyan", 21, '0', true,false);
    human[3].rezult("Edgar","Grigoryan", 17, '1', false,false);
    human[4].rezult("Lilit","Melqumyan", 19, '0', true,false);
    human[5].rezult("Hrach","Gevorgyan", 21, '1', true,false);
    human[6].rezult("Armen","Abrahamyan", 19, '1', true,false);
    human[7].rezult("Arpine","Harutyunyan", 23, '0', false,false);
    human[8].rezult("Ani","Hakobyan", 19, '0', true,false);
    human[9].rezult("Artur","Gasparyan", 24, '1', false,false);
    human[10].rezult("Miqael","Sargsyan", 17, '1', true,false);
    human[11].rezult("Sasha","Avagyan", 18, '1', true,false);
    human[12].rezult("Nona","Musaelyan", 18, '0', true,false);
    std::cout << "\nInput name : ";
    std::cin >> anun;
    status(human, anun, size);
}
