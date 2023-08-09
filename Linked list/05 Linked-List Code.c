// Creating and traversing in a Circular linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void CircularLInkedList(node *head)
{
    node *ptr = head;
    do
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
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

    head->data = 74;
    head->next = second;

    second->data = 46;
    second->next = third;

    third->data = 24;
    third->next = fourth;

    fourth->data = 33;
    fourth->next = head;

    CircularLInkedList(head);
    return 0;
}