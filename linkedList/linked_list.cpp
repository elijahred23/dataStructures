#include "linked_list.h"

template <class T> LinkedList<T>::LinkedList(){
    head = NULL;
    size = 0;
}
template <class T> int LinkedList<T>::getSize(){
    return size;
}
template <class T> bool LinkedList<T>::empty(){
    return size == 0 || head == NULL;
}
template <class T> void LinkedList<T>::addFront(T data){
    Node<T>* newNode = new Node<T>(data);
    if(empty()){
        head = newNode;
    } else{
        (*newNode).setNext(head);
        head = newNode;
    }
    size++;
}
template <class T> void LinkedList<T>::printToConsole(){
    Node<T>* cur = head;
    while(cur != NULL){
        cout << (*cur).getData() << " ";
        cur = (*cur).getNext();
    }
}