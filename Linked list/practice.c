// Insertion in a Circular Linked List in C Language (Insertion at the beginning).

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void LinkedListTravertion(node *head)
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

    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));

    head->data = 44;
    head->next = second;

    second->data = 53;
    second->next = third;

    third->data = 14;
    third->next = fourth;

    fourth->data = 69;
    fourth->next = head;

    LinkedListTravertion(head);

    return 0;
}