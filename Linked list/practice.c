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
        printf("Element : %d", ptr->data);
        ptr->data = ptr->next;
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

    head->data = 52;
    head->next = second;
    head->prev = NULL;

    second->data = 52;
    second->next = third;
    second->prev = head;

    third->data = 52;
    third->next = fourth;
    third->prev = second;

    fourth->data = 52;
    fourth->next = NULL;
    fourth->prev = third;

    LinkedListTraversion(head);

    return 0;
}