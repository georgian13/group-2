#include <iostream>
class Stack {
    private:
        int *array;
        unsigned int lenght;
        int top;
    public:
        Stack(unsigned int lenght = 20) {
            top = -1;
            this->lenght = lenght;
            array = new int[lenght];
        }
        ~Stack() {
                delete [] array;
        }
        void push(int value) {
            if(!isFull()) {
                array[++top] = value;
            } else {
                std::cout<<"Cannot push  Stack full !!!\n";
            }
        }
        int pop() {
            if (!isEmpty()) {
                return array[top--];
            } else {
                std::cout <<"Cannot pop  Stack Empty !!!\n";
                return -1;
            }
        }
        void print(){
            if(!isEmpty()){
                for (int i = top; i >= 0; --i) {
                    std::cout << array[i] <<"  ";
                }
                std::cout <<'\n';
            } else {
                std::cout <<"Cannot print  Stack Empty !!!\n";
            }
        }
        bool isFull() {
            return (top == lenght - 1);
        }
        bool isEmpty() {
            return (top == -1);
        }
        unsigned int size() {
                return top + 1;
        }
};
