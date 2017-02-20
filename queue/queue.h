//
// Created by Jonathan Rozario on 2/15/17.
//

#ifndef ALGORITHM_PREP_WITH_C_QUEUE_H
#define ALGORITHM_PREP_WITH_C_QUEUE_H
#include "node.h"
class Queue {
private:
    Node* first;
    Node* last;
public:
    Queue();
    void enqueue(int num);
    int dequeue();
    int peek();
};
#endif //ALGORITHM_PREP_WITH_C_QUEUE_H
