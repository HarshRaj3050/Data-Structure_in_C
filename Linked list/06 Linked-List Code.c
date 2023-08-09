// Insertion in a Circular Linked List in C Language (Insertion in between).

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

node *Insertion(node *head, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    node *p = head->next;
    ptr->data = data;

    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
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

    head->data = 44;
    head->next = second;

    second->data = 53;
    second->next = third;

    third->data = 14;
    third->next = fourth;

    fourth->data = 69;
    fourth->next = head;

    printf("\n-----Before Insertion-----\n");
    CircularLInkedList(head);
    head = Insertion(head, 99);
    printf("\n-----After Insertion-----\n");
    CircularLInkedList(head);
    return 0;
}