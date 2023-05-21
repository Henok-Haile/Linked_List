#include "lists.h"

struct node* delIntermidateNode(struct node* head, int pos)
{
    struct node *temp = head;
    struct node *temp2 = NULL;

    if (pos == 1)
    {
        head = delFirstNode(head);
        return (head);
    }

    while (pos > 1)
    {
        temp = temp->next;
        pos--;
    }

    if (temp->next == NULL)
    {
        head = delLastNode(head);
    }
    else
    {
        temp2 = temp->prev;
        temp2->next = temp->next;
        temp->next->prev = temp2;
        free(temp);
        temp = NULL;
    }
    return (head);
}
