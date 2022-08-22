#include "node.cpp"
#include <iostream>
using namespace std;
template <class T> class LinkedList{
    Node<T>* head;
    int size;
    public:
    LinkedList();
    int getSize();
    bool empty();
    void addFront(T data);
    void printToConsole();
};