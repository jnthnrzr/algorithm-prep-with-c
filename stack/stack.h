//
// Created by Jonathan Rozario on 2/15/17.
//

#ifndef ALGORITHM_PREP_WITH_C_STACK_H
#define ALGORITHM_PREP_WITH_C_STACK_H
#include "node.h"
class Stack {
private:
    // Node* bottom;
    Node* top;
public:
    Stack();
    void push(int num);
    int pop();
    int peek();
};
#endif //ALGORITHM_PREP_WITH_C_STACK_H
