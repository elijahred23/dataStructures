#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

template <class T> class Node{
    int data;
    Node<T>* left;
    Node<T>* right;

    public:
    Node(T data){
        setData(data);
        setLeft(NULL);
        setRight(NULL);
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

template <class T> class BinarySearchTree{
    Node<T>* root;
    public:
    BinarySearchTree(){
        root = NULL;
    }
    void insertNode(Node<T>* newNode, Node<T>* node){
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
    void insert(T data){
        Node<T>* newNode = new Node<T>(data);
        if(root == NULL){
            root = newNode;
        } else{
            insertNode(newNode, root);
        }
    }
    void inorder(Node<T>* node){
        if(node != NULL){
            inorder((*node).getLeft());
            cout << (*node).getData() << endl;
            inorder((*node).getRight());
        }
    }
    void print(){
        inorder(root);
    }
        
};

int main(){
    srand(time(0));
    BinarySearchTree<int> myTree;

    for(int i = 0; i < 20; i++){
        myTree.insert(1 + rand()% 100);
    }
    myTree.print();
    return 0;
}