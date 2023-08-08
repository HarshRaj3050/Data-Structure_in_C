// Insertion in a Linked List in C Language (Insertion at the end).

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *insertionAtEnd(node *head, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

void LinkedListTraversion(node *ptr)
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

    head->data = 53;
    head->next = second;

    second->data = 28;
    second->next = third;

    third->data = 84;
    third->next = fourth;

    fourth->data = 34;
    fourth->next = NULL;

    int num;
    printf("Enter the number to Insertion At End : ");
    scanf("%d", &num);

    printf("\nBefor Insertion\n");
    LinkedListTraversion(head);

    head = insertionAtEnd(head, num);
    printf("\nAfter Inertion\n");
    LinkedListTraversion(head);

    return 0;
}