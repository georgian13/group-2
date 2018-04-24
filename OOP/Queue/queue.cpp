#ifndef QUEUE_CPP
#define QUEUE_CPP
#include <iostream>
#include "queue.h"
    Queue::Queue(unsigned int m)
    :n(m),first(0),last(0),size(0)
    {
        array = new int[n];
    }
    Queue::Queue(const Queue& coppy)
        :size(coppy.size)
        ,last(coppy.last)
        ,first(coppy.first)
    {
        this->array = new int[n];
    }
    Queue::~Queue() {
        delete []array;
    }
    void Queue::enqueue(double value) {
        std::cout<<"Enqueuing "<< value <<" \n";
        if(!isFull()) {
            array[last] = value;
            size++;
            last = (last+1) % n;
        } else if (isEmpty()) { 
            first = last = 0; 
        } else {
            std::cout<<"Error: Queue is Full\n";
        }
    }
    double Queue::dequeue() {
        if(!isEmpty()) {
            size--;
            int x = array[first];
            first = (first+1)%n;
            std::cout<<"Dequeuing "<< x <<'\n';
            return x;
        } else if(first == last) {
            last = first = 0;
        } else {
            std::cout <<"Error: Queue is Empty\n";
            return -1;
        }
    }
    void Queue::print() {
        if(isEmpty()) {
            std::cout<<"\nThe Queue is empty..";
        } else {
            std::cout<<"\n Queue is.. => ";
            int k = first;
            do {
                std::cout << array[k] <<" ";
                k = (k+1)%n;
            }while(k != last);
            std::cout <<'\n';
        }
    }
    bool Queue::isFull() {
        return (size == n);
    }
    bool Queue::isEmpty() {
        return (size == 0); 
    }
    unsigned int Queue::lenght() {
        return size;
    }
#endif
