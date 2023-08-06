// Creating and traversing in a linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void linkedlistTrabersing(node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
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

    head->data = 64;
    head->next = second;

    second->data = 57;
    second->next = third;

    third->data = 76;
    third->next = fourth;

    fourth->data = 26;
    fourth->next = NULL;

    linkedlistTrabersing(head);

    return 0;
}