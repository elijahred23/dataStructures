#include "binarySearchTree.h"

template <class T> BinarySearchTree<T>::BinarySearchTree(){
    root = NULL;
}
template <class T> void BinarySearchTree<T>::insertNode(Node<T>* newNode, Node<T>* node){
    if((*newNode).getData() < (*node).getData()){
        if((*node).getLeft() == NULL){
            (*node).setLeft(newNode);
        } else{
            insertNode(newNode, (*node).getLeft());
        }
    } else{
        if((*node).getRight() == NULL){
            (*node).setRight(newNode);
        } else{
            insertNode(newNode, (*node).getRight());
        }
    }
}

template <class T> void BinarySearchTree<T>::insert(T data){
    Node<T>* newNode = new Node<T>(data);
    if(root == NULL){
        root = newNode;
    } else{
        insertNode(newNode, root);
    }
}

template <class T> void BinarySearchTree<T>::inorder(Node<T>* node){
    if(node != NULL){
        inorder((*node).getLeft());
        cout << (*node).getData() << endl;
        inorder((*node).getRight());
    }
}
template <class T> void BinarySearchTree<T>::print(){
    inorder(root);
}