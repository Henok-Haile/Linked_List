#include "lists.h"

struct node* delFirstNode(struct node *head)
{
    struct node *temp = head;
    head  = head->next;
    free(temp);
    temp = NULL;
    head->prev = NULL;
    return (head);     
}
