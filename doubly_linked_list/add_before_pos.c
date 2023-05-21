#include "lists.h"

struct node* addBeforePos(struct node* head, int data, int pos)
{
    struct node* newNode = NULL;
    struct node* tp1 = head;
    struct node* tp2 = NULL;

    while (pos > 2)
    {
        tp1 = tp1->next;
        pos--;
    }

    if (pos == 1)
    {
        // tp1->next = newNode;
        // newNode->prev = tp1;
        head = addAtBeg(head, data);
    }
    else
    {
    tp2 = tp1->next;
    tp1->next = newNode;
    tp2->prev = newNode;
    newNode->next = tp2;
    newNode->prev = tp1;
    }

    return (head);
}
