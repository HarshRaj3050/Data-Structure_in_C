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

// Allocate memory for nodes in the linked list in Heap
    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));

    // Link first and second nodes
    head->data = 64;
    head->next = second;
 
    // Link second and third nodes
    second->data = 32;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 63;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 13;
    fourth->next = NULL;

    linkedlistTraversal(head);
    return 0;
}