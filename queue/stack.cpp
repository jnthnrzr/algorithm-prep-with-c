//
// Created by Jonathan Rozario on 2/15/17.
//
#include "stack.h"

Stack::Stack() {
    this->top = NULL;
}

void Stack::push(int num) {
    Node temp = Node(num);
    if (this->top == NULL) {
        this->top = &temp;
    }
    else {
        this->top->set_next(&temp);
        this->top = &temp;
    }
}

int Stack::peek() {
    return this->top->data();
}

int Stack::pop() {
    if (this->top == NULL) {
        return NULL;
    }
    else {
        int temp_data;
        temp_data = this->top->data();
        this->top = this->top->get_next();
        return temp_data;
    }
}