#include <iostream>
using namespace std;

template <class T> class Node{
    int data;
    Node<T>* left;
    Node<T>* right;

    public:
    Node(T data){
        setData(data);
        setNext(NULL);
    }
    T getData(){
        return data;
    }
    void setData(int data){
        this->data = data;
    }
    Node<T>* getLeft(){
        return left;
    }
    void setLeft(Node<T>* left){
        this->left = left;
    }
    Node<T>* getRight(){
        return right;
    }
    void setRight(Node<T>* right){
        this->right = right;
    }
};

int main(){


    return 0;
}