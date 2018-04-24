#include <iostream>
#include "queue.h"
#include "queue.cpp"
int main() {
    Queue Q;
    for(int i = 0;i<5;++i){
        int count;
        std::cin >> count;
        Q.enqueue(count);
    }
        Q.print();
        Q.dequeue();
        Q.dequeue();
        Q.dequeue();
        Q.dequeue();
        Q.print();
}
