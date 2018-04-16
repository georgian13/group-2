#include <iostream>
class Stack {
    private:
        int *array;
        unsigned int top,lenght;
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
                top++;
                array[top] = value;
            } else {
                std::cout<<"Cannot push  Stack full !!!\n";
            }
        }
        int pop() {
            if (!isEmpty()) {
                int number = array[top];
                top--;
                return number;
            } else {
                std::cout <<"Cannot pop  Stack Empty !!!\n";
                return -1;
            }
        }
        void print(){
            if(!isEmpty()){
                for (int i = 0; i<=top; i++) {
                    std::cout << array[i] <<"  ";
                }
                std::cout <<'\n';
            } else {
                std::cout <<"Cannot print  Stack Empty !!!\n";
            }
        }
        bool isFull() {
            bool k = (top == lenght - 1) ? true : false;
            return k;
        }
        bool isEmpty() {
            bool k = (top == -1) ?  true : false;
            return k;
        }
        unsigned int size() {
                return top + 1;
        }
};
