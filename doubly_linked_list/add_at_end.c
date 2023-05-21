#include "lists.h"

struct node* addAtEnd(struct node* head, int data)
{
    struct node* newNode;
    struct node* tp;

    newNode = malloc(sizeof(struct node));
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;

    tp = head;
    while (tp->next)
        tp = tp->next;

    tp->next = newNode;
    newNode->prev = tp;

    return (head);
}
