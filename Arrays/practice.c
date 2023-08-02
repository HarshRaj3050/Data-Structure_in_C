// Write a program in C to store elements in an array and print them.

#include <stdio.h>
int main()
{
    int i,num,arrnum;
    printf("Enter the array size : ");
    scanf("%d", &num);
    int arr[arrnum];
    printf("Input the %d elements \n", num);
    num = num + 1;
    for (i = 1; i < num; i++)
    {
        printf("%d. Enter the element : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe array elements are \n");
    {
    for (i = 1; i < num; i++)
        printf("%d\n", arr[i]);
    }
    return 0;
}