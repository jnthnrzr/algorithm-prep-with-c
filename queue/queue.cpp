//
// Created by Jonathan Rozario on 2/15/17.
//
#include "queue.h"
Queue::Queue() {
    this->first = NULL;
    this->last = NULL;
}

void Queue::enqueue(int num) {
    Node temp = Node(num);
    if (this->first == NULL) {
        this->first = &temp;
        this->last = &temp;
    }
    else {
        this->last->set_next(&temp);
        this->last = &temp;
    }
}

int Queue::dequeue() {
    int temp_data;
    if (this->first == NULL) {
        return NULL;
    }
    else if (this->first == this->last) {
        temp_data = this->first->data();
        this->first = NULL;
        this->last = NULL;
    }
    else {
        temp_data = this->first->data();
        this->first = this->first->get_next();
    }
    return temp_data;
}
int Queue::peek() {
    if (this->first == NULL) {
        return NULL;
    }
    else {
        return this->first->data();
    }
}