#ifndef LIST_H
#define LIST_H
class List {
    private:
        Node* firstPtr;
        Node* lastPtr;
        Node* getNewNode(Node&);
    public:
        List();
        ~List();
        void insertAtFront(Node&);
        void insertAtBack(Node&);
        bool removeFromFront(Node&);
        bool removeFromBack(Node&);
        bool isEmpty();
        void print();
        struct Node {
            int data;
            Node* nextPtr;
        };
};

#endif
