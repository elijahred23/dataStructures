
using namespace std;
template <class T> class Node {
    T data;
    Node* next;

    public:
    Node();
    Node(T data);
    T getData();
    void setData(T data);
    Node<T>* getNext();
    void setNext(Node<T>* next);
};
