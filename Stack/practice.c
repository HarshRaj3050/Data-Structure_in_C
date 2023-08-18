// Implementing isEmpty and  isFull.

#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
    int size;
    int top;
    int *arr;
}stack;

int main()
{

    stack *sp = (stack *)malloc(sizeof(stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    return 0;
}