#include <iostream>
#include "stack.cpp"
int main() {
    Stack S(5);
    for(int i = 0; i<4; i++) {
        S.push(i);
    }
    std::cout <<"Size = "<< S.size() <<'\n';
    S.print();
    for(int i = 0; i<2; i++) {
        S.pop();
    }
    std::cout <<"Size = "<< S.size() <<'\n';
    S.print();
    std::cout <<"Size = "<< S.size() <<'\n';
    return 0;
}
