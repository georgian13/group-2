#include <iostream>
#include "list.h"
int main() {
    List list;
    list.insert(13, 1);
    for(int i = 2; i < 9; ++i) {
        list.pushFront(i);
        list.pushEnd(i+2);
    }
    list.print();
    list[7] = 13;
    std::cout << "Size = " << list.size() << std::endl;
    List list1(list);
    std::cout << list1[10] << " " << list1[4] << std::endl;
    std::cout << "Size = " << list.size() << std::endl;
    std::cout << "list[" << list.find(4) << "] = 4" <<std::endl;
    std::cout <<list[0] << " " << list[1] <<std::endl;
    list1.print();
    list.remove(4);
    list.popEnd();
    list.popFront();
    list.print();
}
