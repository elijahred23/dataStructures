
#include <cstdlib>
#include <time.h>
#include "linked_list.cpp"


int main(){
    srand(time(0));
    LinkedList<int> myList;
    for(int i = 0; i < 5; i++){
        myList.addFront(rand() % 100);
    }
    myList.printToConsole();

    return 0;
}