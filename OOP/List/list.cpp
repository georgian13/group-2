#ifndef LIST_CPP

#define LIST_CPP
#include <iostream>
#include "list.h"
List::List()
    :*firstPtr(0)
    ,*lastPtr(0) { }
List::~List() {
    if(isEmpty()) {
        std::cout <<"Empty \n";
        Node* currentPtr = firstPtr,*tempPtr;
        while(currentPtr != 0 ) {
            tempPtr = currentPtr;
            std::cout << tempPrt-data <<'\n';
            currentPtr = currentPtr->nextPtr;
            delete tempPtr;
        }
    }
}
List::List(const List& coppy)
        :firstPtr(coppy.firstPtr)
        ,lastPtr(coppy.lastPtr)
    { }
bool List::removeFromBack(Node& value) {
    if(isEmpty()) {
        return false; 
    } else {
        Node *tempPtr=lastPtr;
        if(firstPtr==lastPtr) {
            firstPtr=lastPtr=0;
        } else {
            Node *currentPtr=firstPtr;
            while(currentPtr->nextPtr!=lastPtr) {
                currentPtr=currentPtr->nextPtr;
                lastPtr=currentPtr;
                lastPtr->nextPtr=0;
            }
            value = tempPtr->data;
            delete tempPtr;
            return true;
        }
    }
}
bool List::removeAtFront(Node& value) {
    if(isEmpty()) {
        return false;
    } else {
        Node*tempPtr = firstPtr;
        if(firstPtr==lastPtr) {
            firstPtr=lastPtr=0;
        } else {
            firstPtr=firstPtr->nextPtr;
        }
        value = tempPtr->data;
        delete tempPtr;
        return true;
    }
}
void List::insertFromBack(Node& value) {
    Node*newPtr=getNewNode(value);
    if(empty()) {
        firstPtr=lastPtr=newPtr;
    } else {
        lastPtr->nextPtr = newPtr;
        lastPtr = newPtr;
    }
}
void List::insertAtFront(Node& value){
    Node*newPtr=getNewNode(value);
    if(empty()) {
        firstPtr=lastPtr=newPtr;
    } else {
        newPtr->nextPtr=firstPtr;
        firstPtr=newPtr;
    }
}

 Node* List::find(const int & value,bool& f)const{
    Node*tempPtr=firstPtr;
    f = 0;
    while(tempPtr!=0) {
        if(value<=tempPtr->data) {
            return tempPtr;
            tempPtr=tempPtr->nextPtr;
        }
    }
    return lastPtr;

}
Node* List::getNewNode(Node& value){
    Node*ptr = new Node(value);
    return ptr;
}
void List::print() {
    if(empty()) {
        std::cout<<"List is Empty"<<std::endl;
        return;
    }
    Node *currentPtr=firstPtr;
    while(currentPtr!=0) {
        std::cout << currentPtr->data << std::endl;
        currentPtr = currentPtr->nextPtr;
    }
}
bool List::empty() {
    return firstPtr==0;
}
#endif
