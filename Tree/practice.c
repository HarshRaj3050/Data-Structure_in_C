#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}node;

node *createTree(int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = NULL;
    ptr->prev = NULL;
    return ptr;
}

int main()
{
    node *root = (node *)malloc(sizeof(node));


    return 0;
}