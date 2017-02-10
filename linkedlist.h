#include <stdio.h>
#include "node.h"

class LinkedList {

private:
	int size = 0;
	Node* head;
	Node* tail;

public:
	// Create an empty linked list
	LinkedList() {
		this->head = NULL;
		this->tail = NULL;
	}
	// Create a linked list
	LinkedList(int num) {
		Node n = Node(num);
		this->head = &n;
		this->tail = &n;
		this->size += 1;
	}

	Node* list_head() {
		return this->head;
	}

	Node* list_tail() {
		return this->tail;
	}

    void print() {
        printf("PRINTING THE LIST...\n");
        Node temp = *this->list_head();
        for (int i=0; i < this->size; i++) {
            printf("%i", temp.get_data());
            if (i != this->size - 1) {
                printf(" -> ");
            }
        }
    }

	void insert_head(int num){
        // EMPTY LIST
        // head -> 10 <- tail
        // LIST 5 4 23
        // insert_head(1) makes
        // LIST 1 5 4 23

		Node n = Node(num);

		n.set_next(this->head);
		this->head = &n;
        if (this->size == 0) {
            this->tail = &n;
        }
		this->size += 1;
	}

	//working on this right now
	void insert_tail(int num){

        /*
        // 10 30 20
        // 10 30 20 40
        // temp is 40.
        // Before insertion, tail is 20.
        */

        Node temp = Node(num);
        printf("worked till here\n");
//        Node tail = *this->tail;
//        tail.set_next(&temp);
//        this->tail = &tail;
//        this->size += 1;


//		Node n = Node(num);
//        Node t = *this->tail;
		// this->tail = n;
		// 1 2 3 <-tail        n
		// 1 2 3 n <-tail

//		this->tail.set_next(&n);
		// n.set_next(this->tail);
//		this->tail = &n;
//		this->size += 1;
	}

	void insert_at(int index, int num) {
		// insert_at(2, 100)
		// LIST = [5, 19, 26, 0, 13]
		// returns LIST = [5, 19, 100, 26, 0, 13]
        if (index < 0 || index >= size) {
            printf("Wrong index");
        }
		else if (index == 0) {
            insert_head(num);
        }
        else if (index == size - 1) {
            insert_tail(num);
        }
        else {
            Node temp = *this->list_head();
            for (int i = 0; i < this->size; i++) {
                // 5 4 9
                // I want to add "100" at index 1
                // 5 100 4 9
                if (i == index - 1) {
                    // Make a new Node with data = num
                    Node n = Node(num);
                    //
                    n.set_next(temp.get_next());
                    temp.set_next(&n);
                    this->size += 1;
                }
                temp = *(temp.get_next());
            }
        }
	}

	// Return the index of the element we are looking for;
	// Returns NULL if not found
	int search(int num) {
        Node temp = *this->list_head();
        for (int i=0; i < this->size; i++) {
            if (temp.get_data() == num) {
                return i;
            }
            temp = *(temp.get_next());

        }
        return NULL;
	}
};
