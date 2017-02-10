#include <stdio.h>

//g++ node.cpp -o node
//./node

class Node{	

private: 
	int data;
	Node* next;


public:
	Node(int number) {
		this->data = number;
	}


	int get_data() {
		return this->data;
	}

	void set_data(int number) {
		this->data = number;
	}

	Node* get_next() {
		return this->next;
	}

	void set_next(Node* n) {
		this->next = n;
	}
};
//int main(){
//
//	printf("hello world \n");
//
//	return 0;
//}