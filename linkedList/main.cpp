#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

template <class T> class Node {
    T data;
    Node* next;

    public:
    Node(T data){
        setData(data);
        next = NULL;
    }
    T getData(){
        return data;
    }
    void setData(T data){
        this->data = data;
    }
    Node<T>* getNext(){
        return next;
    }
    void setNext(Node<T>* next){
        this->next = next;
    }
};

template <class T> class LinkedList{
    Node<T>* head;
    int size;
    public:
    LinkedList(){
        head = NULL;
        size = 0;
    }
    int getSize(){
        return size;
    }
    bool empty(){
        return head == NULL || size == 0;
    }
    void addFront(T data){
        Node<T>* newNode = new Node<T>(data);
        if(empty()){
            head = newNode;
        } else{
            (*newNode).setNext(head);
            head = newNode;
        }
        size++;
    }
    void printToConsole(){
        Node<T>* cur = head;
        while(cur != NULL){
            cout << (*cur).getData() << endl;
            cur = (*cur).getNext();
        }
    }
    void randomlyFill(int amount){
        for(int i = 0; i < amount;i++){
            addFront(1 + rand() % 100);
        }
    }
};

int main(){
    srand(time(0));
    LinkedList<int> myList;

    myList.randomlyFill(10);
    myList.printToConsole();


    return 0;
}