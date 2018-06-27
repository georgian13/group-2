#ifndef QUEUE_H
#define QUEUE_H
class Queue {
    private:
        int *array;
        int first;
        int last;
        unsigned int size;
        unsigned int n;
    public:
        Queue(unsigned int = 10);
        Queue(const Queue& coppy);
        ~Queue();
        void print ();
        bool isEmpty ();
        bool isFull ();
        void enqueue(double);
        double dequeue();
        unsigned int lenght();
};
#endif
