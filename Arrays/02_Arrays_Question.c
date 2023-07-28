// How to read and print elements of a C array of any size?

#include <stdio.h>
int main()
{
    int i, j;
    printf("Enter the Arry size : ");
    scanf("%d", &i);
    printf("\nThe size of Arrays are : %d\n", i);
    int a[i];
    printf("Enter the all element in arrays\n");

    for (j = 0; j < i; j++)
    {
        scanf("%d", &a[j]);
    }
    printf("\nElement of array are : \n");
    for (j = 0; j < i; j++)
    {
        printf("%d\n", a[j]);
    }
    return 0;
}