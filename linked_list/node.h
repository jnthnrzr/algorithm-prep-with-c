#include <stdio.h>

//g++ node.cpp -o node
//./node

class Node{

public:
    // CONSTRUCTOR
	Node(const int& init_data = int(), Node *link = NULL) {
        data_field = init_data; next = link;
    }

    // MEMBER FUNCTIONS TO SET THE DATA AND NEXT FIELDS:
    void set_data(const int& new_data) { data_field = new_data; }
    void set_next(Node *node_ptr) { next = node_ptr; }

    // CONSTANT MEMBER FUNCTION TO RETRIEVE CURRENT DATA:
    int data () const { return data_field; }

    // TWO SLIGHTLY DIFFERENT MEMBER FUNCTIONS TO RETRIEVE THE CURRENT LINK:
    const Node* get_next() const { return next; }
    Node* get_next() { return next; }

private:
    int data_field;
    Node* next;
};
