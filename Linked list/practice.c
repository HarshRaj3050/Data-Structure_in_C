// Creating and traversing in a linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

int main()
{
    node *head = (node *)malloc(sizeof(node));
    node *second = (node *)malloc(sizeof(node));
    node *third = (node *)malloc(sizeof(node));
    node *fourth = (node *)malloc(sizeof(node));

    head->data = 63;
    head->next = second;

    second->data = 82;
    second->next = third;

    third->data = 28;
    third->next = fourth;

    fourth->data = 93;
    fourth->next = NULL;



    return 0;
}