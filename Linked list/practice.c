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

node *insertion(node *head, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    node *p = head->next;
    ptr->data = data;

    while(p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return head;
}

node *inbetween(node *head, int data, int index)
{
    node *ptr = (node *)malloc(sizeof(node));
    node *p = head;
    int i = 0;
    while(i != index-1)
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

    second->data = 46;
    second->next = third;

    third->data = 24;
    third->next = fourth;

    fourth->data = 33;
    fourth->next = head;

    printf("\n-----Before Insertion-----\n");
    CircularLInkedList(head);
    head = inbetween(head, 99, 2);
    printf("\n-----After Insertion-----\n");
    CircularLInkedList(head);
    return 0;
}