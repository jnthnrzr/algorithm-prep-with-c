//
// Created by Jonathan Rozario on 2/10/17.
//
#ifndef LIST_H
#define LIST_H

// Define a structure for linked list elements.
typedef struct ListElmt_ {
    void                *data;
    struct ListElmt_    *next;
} ListElmt;

// Define a structure for linked lists.
typedef struct List_ {
    int                 size;
    int
} List;






#endif