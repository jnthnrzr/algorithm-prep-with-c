#include "node.h"

class LinkedList {

private:
	int size;   // size of LinkedList
	Node *head_ptr; // HEAD pointer
	Node *tail_ptr; // TAIL pointer

public:

	// CREATE AN EMPTY LINKED LIST
	LinkedList(void) {
		*head_ptr = NULL;
		*tail_ptr = NULL;
        size = 0;

        // DISPLAY INFO
        printf("Empty LinkedList Created\n");
        if (this->head_ptr == NULL) {
            printf("HEAD points to NULL\n");
        }
        if (this->tail_ptr == NULL) {
            printf("TAIL points to NULL\n");
        }
        if (this->size == 0) {
            printf("SIZE is %i\n", this->size);
        }
        if (this->tail_ptr->get_next() == NULL) {
            printf("TAIL get_next points to NULL.\n");
        }

	}

	// CREATE A LINKED LIST WITH GIVEN NUMBER
	LinkedList(int integer) {
		Node n = Node(integer);
		this->head_ptr = this->tail_ptr = &n;
		this->size = 1;

        // DISPLAY INFO
        printf("LinkedList with Node %i Created.\n", integer);
        printf("HEAD points to %i.\n", this->head_ptr->data());
        printf("TAIL points to %i.\n", this->tail_ptr->data());
        printf("size is %i.\n", this->size);
        if (this->tail_ptr->get_next() == NULL) {
            printf("TAIL get_next points to NULL.\n");
        }
	}

	void insert_head(int integer){
        // CREATE NODE WITH integer
        Node temp = Node(integer);

        // IF LIST IS EMPTY
        if (this->size == 0) {
            printf("Adding %i to an empty LinkedList.\n");

            this->head_ptr = &temp;
            this->tail_ptr = this->head_ptr;
        }
            // OTHERWISE, THE LIST HAS OTHER NODES
        else {
            printf("LinkedList is non-empty!\n");
            printf("HEAD: %i, TAIL: %i.\n", (this->head_ptr)->get_data(), (this->tail_ptr)->get_data());
            temp.set_next(this->head_ptr);
            this->head_ptr = &temp;
        }

        this->size += 1;

        // DISPLAY INFO
        printf("Adding a Node %i at the HEAD of the LinkedList.\n", integer);
        printf("HEAD points to %i.\n", this->head_ptr->get_data());
        printf("HEAD get_next points to %i.\n", this->head_ptr->get_next()->get_data());
        printf("TAIL points to %i.\n", this->tail_ptr->get_data());
        printf("SIZE increased to %i.\n", this->size);

        return;
	}

	void insert_tail(int integer){

        /*
        // 10 30 20
        // 10 30 20 40
        // temp is 40.
        // Before insertion, tail_ptr is 20.
        */

        Node temp = Node(integer);
        printf("worked till here\n");
//        Node tail_ptr = *this->tail_ptr;
//        tail_ptr.set_next(&temp);
//        this->tail_ptr = &tail_ptr;
//        this->size += 1;


//		Node n = Node(num);
//        Node t = *this->tail_ptr;
		// this->tail_ptr = n;
		// 1 2 3 <-tail_ptr        n
		// 1 2 3 n <-tail_ptr

//		this->tail_ptr.set_next(&n);
		// n.set_next(this->tail_ptr);
//		this->tail_ptr = &n;
//		this->size += 1;
	}

	void insert_at(int index, int integer) {
		// insert_at(2, 100)
		// LIST = [5, 19, 26, 0, 13]
		// returns LIST = [5, 19, 100, 26, 0, 13]
        if (index < 0 || index >= size) {
            printf("Wrong index\n");
        }
		else if (index == 0) {
            insert_head(integer);
        }
        else if (index == size - 1) {
            insert_tail(integer);
        }
        else {
            Node temp = this->get_head();
            for (int i = 0; i < this->size; i++) {
                // 5 4 9
                // I want to add "100" at index 1
                // 5 100 4 9
                if (i == index - 1) {
                    // Make a new Node with integer = num
                    Node n = Node(integer);
                    //
                    n.set_next(temp.get_next());
                    temp.set_next(&n);
                    this->size += 1;
                }
                temp = *temp.get_next();
            }
        }
	}

	// Return the index of the element we are looking for;
	// Returns NULL if not found
	int search(int integer) {
        Node temp = this->get_head();
        for (int i=0; i < this->size; i++) {
            printf("found %i \n", temp.get_data());
            if (temp.get_data() == integer) {
                return i;
            }
            temp = *(temp.get_next());


        }
        return NULL;
	}
};
