// Creating and traversing in a linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

void LinkedListTraversal(node *head)
{
    node *ptr = head;
    while(ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

int a[5];
    for(int i=0; i>5; i++)
    {
        printf("%d. Enter the number to insert the LinkedList : \n", i+1);
        scanf("%d", &a[i]);
    }

    node *head;
    node *second;
    node *third;
    node *fourth;

    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));


    head->data = a[0];
    head->next = second;

    second->data = a[1];
    second->next = third;

    third->data = a[2];
    third->next = fourth;
    
    fourth->data = a[3];
    fourth->next = NULL;
    
    printf("----- The all the Linked List Element are ------\n");
    LinkedListTraversal(head);

    return 0;
}