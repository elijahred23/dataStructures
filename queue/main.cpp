#include <iostream>

template <typename T>
class Queue {

private:
	struct Node{
		T data;
		Node* next;
		Node(const T& value) : data(value), next(nullptr){}
	};

	Node* frontNode;
	Node* rearNode;
	size_t size;

public:
	Queue() :frontNode(nullptr), rearNode(nullptr), size(0){}

	~Queue() {
		clear();
	}

	bool isEmpty() const {
		return size == 0;
	}

	size_t getSize() const {
		return size;
	}

	void enqueue(const T& value){
		Node* newNode = new Node(value);
		if(isEmpty()){
			frontNode = rearNode = newNode;
		} else {
			rearNode->next = newNode;
			rearNode = newNode;
		}
		size++;
	}

	T front() const {
		if(isEmpty()){
			throw std::runtime_error("Error: Queue is empty. Cannot access front element.");
		}
		return frontNode->data;
	}

	void dequeue(){
		if(isEmpty()) {
			std::cerr << "Error: Queue is empty. Cannot dequeue." << std::endl;
			return;
		}

		Node* temp = frontNode;
		frontNode = frontNode->next;
		delete temp;
		size--;

		if(isEmpty()){
			rearNode = nullptr;
		}
	}

	void clear(){
		while(!isEmpty()){
			dequeue();
		}
	}
};


int main(){
	Queue<int> myQueue;

	myQueue.enqueue(10);
	myQueue.enqueue(20);
	myQueue.enqueue(30);

	std::cout << "Front element: " << myQueue.front() << std::endl;

	myQueue.dequeue();

	std::cout << "Front element after dequeue: " << myQueue.front() << std::endl;

	std::cout << "Queue size: " << myQueue.getSize() << std::endl;

	return 0;
}
