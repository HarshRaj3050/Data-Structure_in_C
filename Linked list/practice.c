#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}node;

int main()
{
    node *head;
    head = (node *)malloc(sizeof(node));

    return 0;
}