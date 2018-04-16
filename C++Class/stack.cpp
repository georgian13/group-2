#include <iostream>
class Stack {
    private:
        int *array;
        int top,lenght;
    public:
        Stack(int lenght = 20) {
            top = -1;
            this->lenght = lenght;
            array = new int[lenght];
        }
        ~Stack() {
            if(!isEmpty()) {
                delete [] array;
            }
        }
        void push(int value) {
            if(!isFull()) {
                top++;
                array[top] = value;
            } else {
                std::cout<<"Cannot push  Stack full !!!\n";
                return;
            }
        }
        int pop() {
            if (isEmpty()) {
                std::cout <<"Cannot pop  Stack Empty !!!\n";
            } else {
                int number = array[top];
                top--;
                return number;
            }
        }
        void print(){
            for (int i = 0; i<=top; i++) {
                std::cout << array[i] <<"  ";
            }
            std::cout <<'\n';
        }
        bool isFull() {
            if(top == lenght - 1) {
                return true;
            } else {
                return false;
            }
        }
        bool isEmpty() {
            if(top == -1) {
                return true;
            } else {
                return false;
            }
        }
        int size() {
            if(!isEmpty()) {
                std::cout <<"Stack size equale = "<< top + 1 <<'\n';
            } else {
                std::cout <<"This Stack NO size !!!";
            }
        }
};
