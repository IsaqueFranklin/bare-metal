//
// linkedlist.h 
//
// Created by Isaque Franklin at 17/11/2024
//

#ifdef linkedlist_h
#define linkedlist_h

#include <stdlib.h>

// There is no classes in C (thank God!). So we need to improvise.

struct LinkedList_int {
  struct Node_int *head;
  int length;

  void (*insert)(int index, int data, struct LinkedList_int *linked_list);
  void (*remove)(int index, struct LinkedList_int *linked_list);
  int (*retrieve)(int index, struct LinkedList_int *linked_list);
  struct LinkedList_int (*constructor)(void);
};

struct LinkedList_int linked_list_constructor();

#endif /* linkedlist_h */
