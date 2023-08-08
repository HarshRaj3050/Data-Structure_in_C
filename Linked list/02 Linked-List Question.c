// Insertion in a Linked List in C Language (Insertion at the beginning).

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void LinedListTraversion(node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

node * insertAtFirst(node *head, int data){
    node * ptr = (node *) malloc(sizeof(node));
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

// Allocate memory for nodes in the linked list in Heap
    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));

    head->data = 43;
    head->next = second;

    second->data = 64;
    second->next = third;

    third->data = 34;
    third->next = fourth;

    fourth->data = 73;
    fourth->next = NULL;

    printf("Before Insert\n");
    LinedListTraversion(head);

    head = insertAtFirst(head, 63);
    printf("\nAfter Insert At First\n");
    LinedListTraversion(head);
        return 0;
}