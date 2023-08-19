// Implementing isEmpty and  isFull.

#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
    int size;
    int top;
    int *arr;
}stack;

int isEmpty(stack *ptr)
{
    if(ptr == -1)
    {
       return 1;
    }
    return 0;
}

int isFull(stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    return 0;
}

int push(stack *ptr, int value)
{
    if(isFull(ptr))
    {
        printf("Stack is Full, %d value cannot be push", value);
    }
}

int main()
{

    stack *sp = (stack *)malloc(sizeof(stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    return 0;
}