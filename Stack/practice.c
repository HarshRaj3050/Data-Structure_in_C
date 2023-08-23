// Implementing the pop operations.

#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int size;
    int top;
    struct node *arr;
}node;

int isFull(node *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(node *ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

void push(node *ptr, int value)
{
    if(isFull(ptr))
    {
        printf("The stack is overflow, %d is cannot be push", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int main()
{
    node *sp = (node *)malloc(sizeof(node));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));




    return 0;
}