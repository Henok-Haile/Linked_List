#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node* addToEmpty(struct node* head, int data);
struct node* addAtBeg(struct node* head, int data);
struct node* addAtEnd(struct node* head, int data);
struct node* addAfterPos(struct node* head, int data, int pos);
struct node* addBeforePos(struct node* head, int data, int pos);
struct node* delFirstNode(struct node *head);
struct node* delLastNode(struct node *head);
struct node* delIntermidateNode(struct node *head);

#endif /* lists.h */
