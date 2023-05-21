#include "lists.h"

struct node* addAtBeg(struct node* head, int data)
{
    struct node* newNode;

    newNode = malloc(sizeof(struct node));
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;

    newNode->next = head;
    head->prev = newNode;
    head = newNode;

    return (head);
}
