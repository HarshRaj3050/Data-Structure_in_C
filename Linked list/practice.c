// Creating and traversing in a linked list

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

node *inserted(node *head, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

node *insertedIndex(node *head, int data, int index)
{
    node *ptr = (node *)malloc(sizeof(node));
    node *p = head;

    int i = 0;
    while (i != index-1)
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

    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));

    head->data = 56;
    head->next = second;

    second->data = 62;
    second->next = third;

    third->data = 35;
    third->next = fourth;

    fourth->data = 26;
    fourth->next = NULL;

    printf("\nBefore Insert\n");
    LinkedListTraversion(head);
    head = insertedIndex(head, 58, 2);
    printf("\nAfter Insert\n");
    LinkedListTraversion(head);

    return 0;
}