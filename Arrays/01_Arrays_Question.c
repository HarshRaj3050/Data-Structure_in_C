// Write a program in C to store elements in an array and print them.

#include <stdio.h>
int main()
{

    int i, arr[5];
    printf("Input 5 elements in the array :\n");
    for (i = 1; i < 6; i++)
    {
        printf("%d Enter Number : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nElement of Arrays are : \n");
    for (i = 1; i < 6; i++)
    {
        printf("%d\n", arr[i]);
    }
}
