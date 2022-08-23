template <class T> class Node{
    int data;
    Node<T>* left;
    Node<T>* right;

    public:
    Node(T data);
    T getData();
    void setData(int data);
    Node<T>* getLeft();
    void setLeft(Node<T>* left);
    Node<T>* getRight();
    void setRight(Node<T>* right);
};