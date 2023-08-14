// Implementing the push operations.

#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int size;
    int top;
    int *arr;
} stack;

int isEmpty(stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("Stack is overflow, %d is cannot be push\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}

int main()
{
    stack *sp = (stack *)malloc(sizeof(stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    printf("Befor pushing, Empty : %d\n", isEmpty(sp));
    printf("Befor pushing, Full : %d\n", isFull(sp));
    push(sp, 52);
    printf("After pushing, Empty : %d\n", isEmpty(sp));
    printf("After pushing, Full : %d\n", isFull(sp));

    return 0;
}