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

int array(num)
{
    int i=0,a[5];
    while(i>5)
    {
        printf("%d. Enter the number to insert the LinkedList : \n", i+1);
        scanf("%d", &a[i]);
        i++;
    }
    return a[num];
}

int main()
{

    int num[5];
    num[5] = array(num);

    node *head;
    node *second;
    node *third;
    node *fourth;

    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));


    head->data = num[0];
    head->next = second;

    second->data = num[1];
    second->next = third;

    third->data = num[2];
    third->next = fourth;
    
    fourth->data = num[3];
    fourth->next = NULL;
    
    printf("----- The all the Linked List Element are ------\n");
    LinkedListTraversal(head);

    return 0;
}