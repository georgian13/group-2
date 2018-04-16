#include <iostream>
#include "stack.cpp"
int main() {
    Stack S;
    for(int i = 0; i<5; i++) {
        S.push(i);
    }
    S.print();
    S.size();
    S.pop();
    S.print();
    S.size();
    S.push(1);
    S.push(123);
    S.print();
    S.size();
    S.push(6);
    S.print();
    S.size();
    S.pop();
    S.print();
    S.size();
    return 0;
}
