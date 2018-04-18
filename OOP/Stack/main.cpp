#include <iostream>
#include "stack.cpp"
int main() {
    int n;
    std::cout << "Input size :: ";
    std::cin >> n;
    Stack S(n);
    for(int i = 0; i<n; i++) {
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
