// Write a program in C to store elements in an array and print them.

#include <stdio.h>
int main()
{
    int i, arr[5];
    printf("Input the 5 elements \n");
    for (i = 1; i < 6; i++)
    {
        printf("%d. Enter the element : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe array elements are \n");
    {
    for (i = 1; i < 6; i++)
        printf("%d\n", arr[i]);
    }
    return 0;
}