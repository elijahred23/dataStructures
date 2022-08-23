#include "node.h"
#include <cstddef>

template <class T> Node<T>::Node(T data){
    setData(data);
    setLeft(NULL);
    setRight(NULL);
}
template <class T> T Node<T>::getData(){
        return data;
}

template <class T> void Node<T>::setData(int data){
    this->data = data;
}
template <class T> Node<T>* Node<T>::getLeft(){
        return left;
}
template <class T> void Node<T>::setLeft(Node<T>* left){
        this->left = left;
}
template <class T> Node<T>* Node<T>::getRight(){
        return right;
}
template <class T> void Node<T>::setRight(Node<T>* right){
    this->right = right;
}