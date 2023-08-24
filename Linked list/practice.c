#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void LinkedListTraversal(node *ptr)
{
    while(ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    node *head = (node *)malloc(sizeof(node));
    node *p1 = (node *)malloc(sizeof(node));
    node *p2 = (node *)malloc(sizeof(node));
    node *p3 = (node *)malloc(sizeof(node));
    
    head->data = 53;
    head->next = p1;
    p1->data = 34;
    p1->next = p2;
    p2->data = 63;
    p2->next = p3;
    p3->data = 83;
    p3->next = NULL;

    LinkedListTraversal(head);
    
    return 0;
}