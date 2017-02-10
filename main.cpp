//
// Created by Jonathan Rozario on 2/9/17.
//
//#include "node.h"
#include "linkedlist.h"

int main() {
    printf("Testing Linked List...\n");
//    // returns LIST = [5, 19, 100, 26, 0, 13]
    LinkedList list = LinkedList();
    list.insert_head(5);
    list.insert_head(9);
    list.insert_head(19);
    list.print();
//    list.insert_tail(13);
//    list.insert_at(1, 19);
//    list.insert_at(2, 26);
//    list.insert_at(3, 0);
//    list.insert_at(2, 100);
//    list.print();
//    list.search(100);
//    list.print();
//    return 0;
}
