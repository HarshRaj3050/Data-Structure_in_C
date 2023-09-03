#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void LinkedListTraversion(node *head)
{
    while (head != NULL)
    {
        printf("Element : %d\n", head->data);
        head = head->next;
    }
}

node * inoder(node *head, int data)
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

    head->data = 53;
    head->next = second;

    second->data = 63;
    second->next = third;
    
    third->data = 24;
    third->next = fourth;

    fourth->data = 92;
    fourth->next = NULL;

    printf("Before Insertion \n");
    LinkedListTraversion(head);
    head = inoder(head, 299);
    printf("After Insertion \n");
    LinkedListTraversion(head);

    return 0;
}