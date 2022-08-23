#include "node.cpp"
#include <iostream>
using namespace std;

template <class T> class BinarySearchTree{
    Node<T>* root;
    public:
    BinarySearchTree();
    void insertNode(Node<T>* newNode, Node<T>* node);
    void insert(T data);
    void inorder(Node<T>* node);
    void print();
};