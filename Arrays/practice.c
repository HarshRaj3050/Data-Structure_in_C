// Write a program in C to store elements in an array and print them.

#include<stdio.h>

int main()
{
    int i,j;
    printf("\n------------------------------\n");
    printf("Enter 5 Element\n");
    int arr[5];
    for(i=0; i<5; i++)
    {
        printf("%d. Enter Number : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("------------------------------\n");
    printf("\nThe Element Are : \n");
    for(i=0; i<5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}