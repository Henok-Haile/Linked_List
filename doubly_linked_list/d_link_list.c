#include <stdio.h>
#include "lists.h"

int main(void)
{
    struct node *head = NULL;
    struct node* ptr;

    head = addToEmpty(head, 45);
    head = addAtBeg(head, 34);
    head = addAtEnd(head, 9);
    head = addAfterPos(head, 25, 2);
    head = addBeforePos(head, 20, 3);

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    return (0);
}
