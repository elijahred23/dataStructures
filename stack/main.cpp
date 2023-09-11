#include <iostream>
#include <vector>


using namespace std;

template <typename T>

class Stack{

private:
	vector<T> elements;

public:
	void push(const T& value){
		elements.push_back(value);
	}

	void pop(){
		if(!empty()){
			elements.pop_back();
		}
	}
	T top() const{
		if(!empty()){
			return elements.back();
		}
		throw out_of_range("Stack is empty");
	}

	bool empty() const {
		return elements.empty();
	}

	size_t size() const {
		return elements.size();
	}

};

int main(){
	Stack<int> intStack;

	intStack.push(10);
	intStack.push(20);
	intStack.push(30);

	cout << "Top element: " << intStack.top() << endl;


	intStack.pop();

	cout << "Top element after pop: " << intStack.top() << endl;

	if(intStack.empty()){
		cout << "Stack is empty." << endl;
	} else {
		cout << "Stack is not empty." << endl;
	}
	cout << "Stack size: " << intStack.size() << endl;

	return 0;
}

