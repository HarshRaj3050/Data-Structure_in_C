// Implementing the peek function.

#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
    int size;
    int top;
    int *arr;
} stack;

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

void push(stack *ptr, int value)
{
    if(isFull(ptr))
    {
        printf("Stack is overflow, %d element is cannot be push");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int peek(stack *sp, int i)
{
    int arrayInd = sp->top - i + 1;
    if(arrayInd < 0)
    {
        printf("Not a vaild position of this stack");
        return -1;
    }
    else
    {
        return sp->arr[arrayInd];
    }
}

int main()
{
    stack *sp = (stack *)malloc(sizeof(stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    push(sp, 63);
    push(sp, 35);
    push(sp, 84);
    push(sp, 57);

    for(int j = 1; j <= sp->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(sp, j));
    }

    return 0;
}