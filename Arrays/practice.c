// C Program To find biggest and smallest number and positions in array

#include<stdio.h>
int main()
{
    int i,num, numarr, max, min, maxpos, minpos;
    printf("Enter the array size : ");
    scanf("%d", &num);

    printf("\nINPUT THE %d ELEMENTS \n", num);
    int arr[num];
    numarr = num + 1;

    for(i = 1; i < numarr; i++)
    {
        printf("%d. Enter the Number : ", i);
        scanf("%d", &arr[i]);
    }

    max = 0;
    maxpos = 1;
    for(i = 1; i < numarr; i++)
    {
  
        if (max < arr[i])
        {
            max = arr[i];
            maxpos = i;
        }
    }

    min = max;
    minpos = 1;
    for(i = 1; i < numarr; i++)
    {
  
        if (min > arr[i])
        {
            min = arr[i];
            minpos = i;
        }
    }

    printf("\nThe Biggest element of Array is : %d \n", max);
    printf("The Biggest element position is : %d \n", maxpos);
    printf("\nThe Smallest element of Array is : %d \n", min);
    printf("The Smallest element position is : %d \n", minpos);
    return 0;
}