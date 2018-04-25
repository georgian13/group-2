#ifndef LIST
#define LIST

class List {
    private:
        struct Node {
            int _value;
            Node* next;
            Node(int value, Node* next = NULL)
            :next(next)
            ,_value(value)
            {}
        };
        Node* _head;
        Node* _tail;
        unsigned int _size;
        void* shiftTo(unsigned int);
    public:
        List();
        List(const List&);
        ~List();
        int& operator[](unsigned int); 
        int find(int);
        void insert(int, unsigned int);
        void pushFront(int value);
        void pushEnd(int value);
        int remove(unsigned int);
        int popFront();
        int popEnd();
        unsigned int size();
        void print();
};
#endif
