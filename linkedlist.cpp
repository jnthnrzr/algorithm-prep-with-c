#include <stdio.h>

class LinkedList {

private:
	Node* head;
	Node* tail;

public: 
	LinkedList(int num=NULL) {
		Node n = Node(num);
		this->head = n;
		this->tail = n;
	}	

	void insert_head(int num){
		Node n = Node(num);
		n.set_next(this->head);
		this->head = n;
	}

//working on this right now
	void insert_tail(int num){
		Node n = Node(num);
		n.set_next(this->tail);
		this->tail = n;
	}


};



/*


*/
