#include "node.h"

template <class T> Node<T>::Node(){
    next = NULL;
}
template <class T> Node<T>::Node(T data){
        setData(data);
        next = NULL;
}
template <class T> T Node<T>::getData(){
    return data;
}
template <class T> void Node<T>::setData(T data){
    this->data = data;
}
template <class T> Node<T>* Node<T>::getNext(){
    return next;
}
template <class T> void Node<T>::setNext(Node<T>* next){
    this->next = next;
}