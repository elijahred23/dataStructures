#include "binarySearchTree.cpp"
#include <time.h>
#include <cstdlib>


int main(){
    srand(time(0));
    BinarySearchTree<int> myTree;

    for(int i = 0; i < 20; i++){
        myTree.insert(1 + rand() % 100);
    }
    myTree.print();
    return 0;
}