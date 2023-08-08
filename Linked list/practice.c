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

    printf("\n-----------Create a Linked-List-----------\n");
    printf("\nEnter the 4 Element\n");

    int a[5], num;
    for(int i=0; i<4; i++)
    {
        printf("%d. Enter the element : ", i+1);
        scanf("%d", &a[i]);
    }

    head->data = a[0];
    head->next = second;

    second->data = a[1];
    second->next = third;

    third->data = a[2];
    third->next = fourth;

    fourth->data = a[3];
    fourth->next = NULL;

    printf("\n----Before Insert----\n");
    LinkedListTraversion(head);

    printf("\nEnter the element to Inserted the second Index : ");
    scanf("%d", &num);

    head = insertedIndex(head, num, 2);
    printf("\n----After Insert----\n");
    LinkedListTraversion(head);

    return 0;
}