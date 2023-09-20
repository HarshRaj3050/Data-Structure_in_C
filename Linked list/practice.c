#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}node;

void LinkedListTraversion(node *head)
{
    node *ptr = head;
    while(ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

node *addNode(node *head, int data)
{
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
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

    head->data = 52;
    head->next = second;
    head->prev = NULL;

    second->data = 86;
    second->next = third;
    second->prev = head;

    third->data = 25;
    third->next = fourth;
    third->prev = second;

    fourth->data = 90;
    fourth->next = NULL;
    fourth->prev = third;

    LinkedListTraversion(head);
    printf("\n\n Add New Element \n");
    head = addNode(head, 62);
    LinkedListTraversion(head);

    return 0;
}