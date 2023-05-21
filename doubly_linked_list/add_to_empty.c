#include "lists.h"

struct node* addToEmpty(struct node* head, int data)
{
    struct node *newNode;

    newNode = malloc(sizeof(struct node));

    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;

    head = newNode;

    return (head);
}
