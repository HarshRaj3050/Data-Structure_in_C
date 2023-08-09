// Insertion in a Linked List in C Language (Insertion in between).

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void LinkedListTraversion(node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

node *insertIndex(node *head, int data, int index)
{
    node *ptr = (node *)malloc(sizeof(node));
    node *p = head;

    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
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

    second->data = 26;
    second->next = third;

    third->data = 32;
    third->next = fourth;

    fourth->data = 64;
    fourth->next = NULL;

    printf("Befor Insert\n");
    LinkedListTraversion(head);
    head = insertIndex(head, 42, 2);
    printf("\nAfter Insert\n");
    LinkedListTraversion(head);
    return 0;
}