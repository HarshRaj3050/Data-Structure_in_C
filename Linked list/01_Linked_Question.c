// Creating and traversing in a linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void linkedlistTraversal(node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    node *head;
    node *second;
    node *third;
    node *fourth;

    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));

    head->data = 17;
    head->next = second;
    second->data = 19;
    second->next = third;
    third->data = 41;
    third->next = fourth;
    fourth->data = 79;
    fourth->next = NULL;

    linkedlistTraversal(head);
    return 0;
}