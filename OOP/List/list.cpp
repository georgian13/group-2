#include <iostream>
#include "list.h"
List::List()
    :_head(NULL)
    ,_tail(NULL)
    ,_size(0) {}
List::List(const List& list)
    :_size(list._size)
    ,_head(list._head)
    ,_tail(list._tail)
    {}
List::~List(){
    while (_head) {
        Node* tmp = _head;
        _head = _head->next;
        delete tmp;
    }
}
void List::pushFront(int value) {
    if (_size) {
        Node* tmp = _head;
        _head = new Node(value);
        _head->next = tmp;
    } else {
        _head = new Node(value);
        _tail = _head;
    }
    ++_size;
}
void List::pushEnd(int value) {
    if(_head) {
        _tail->next = new Node(value);
        _tail = _tail->next;
            } else {
            _head = new Node(value);
        _tail = _head;
            }
                ++_size;
    }
void List::insert(int value, unsigned int index) {
    if(index <= _size){
        if(index == 0) {
            pushFront(value);
            return;
        } else if (index == _size) {
            pushEnd(value);
            return;
        }
        Node* tmp = (Node*)shiftTo(index-1);
        Node* tmp = tmp->next;
        tmp->next = new Node(value);
        tmp = tmp->next;
        tmp->next = tmp;
        ++_size;
    } else {
        std::cout << "BLA BLA\n";
    }
}
void List::print() {
    Node* tmp = _head;
    for (unsigned int i = 0; i < _size; ++i) {
        std::cout << tmp->_value << ' ';
        tmp = tmp->next;
    }
    std::cout << std::endl;
}
int& List::operator[] (unsigned int index) {
    if(index < _size){
        if(index == 0) {
            return _head->_value;
        } else if (index == _size - 1) {
                return _tail->_value;
        }
        Node* tmp = (Node*)shiftTo(index);
            return tmp->_value;
    } else {
        std::cout << "BLA BLA";
        int a = -1;
        return a;
    }
}
void* List::shiftTo(unsigned index) {
    if(index < _size) {
        Node* tmp = _head;
        for(unsigned int i = 0; i < index; ++i) {
            tmp = tmp->next;
        }
        return tmp;
    } else {
        std::cout << "BLA BLA!\n";
    }
}
int List::find(int value) {
    Node* tmp = _head;
    for(unsigned int i = 0; i < _size; ++i) {
        if (tmp->_value == value) {
            return i;
        }
        tmp = tmp->next;
    }
    std::cout << "BLA BLA! " << value << " it is\n";
    return -1;
}

int List::remove(unsigned int index) {
    if (index < _size) {
        int value;
        if (index == 0) {
            Node* tmp = _head;
            _head = _head->next;
            value = tmp->_value;
            delete tmp;
            --_size;
            return value;
        } else if (index == _size - 1) {
            Node* tmp = _tail;
            _tail = (Node*) shiftTo(_size - 2);
            value = tmp->_value;
            delete tmp;
            --_size;
            return value;
        }
        Node* tmp = (Node*) shiftTo(index);
        Node * pre = (Node *) shiftTo(index - 1);
        pre->next = tmp->next;
        --_size;
        value = tmp->_value;
        delete tmp;
        return value;
    }
    std::cout << "Error\n";
}

int List::popFront() {
    int value = remove(0);
    return value;
}

int List::popEnd() {
    int value = remove(_size - 1);
    return value;
}
unsigned int List::size() {
    return _size;
}
