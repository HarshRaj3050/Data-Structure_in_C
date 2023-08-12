#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void travertion(node *head)
{
    node *ptr = head;
    while(ptr!=NULL)
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

    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));
    
    head->data = 56;
    head->next = second;
    second->data = 63;
    second->next = third;
    third->data = 34;
    third->next = fourth;
    fourth->data = 12;
    fourth->next = NULL;

    travertion(head);

    
    return 0;
}