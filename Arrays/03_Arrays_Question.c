// C Program To find biggest and smallest number and positions in array

#include <stdio.h>
int main()
{
    int i, n, max, min, maxpos, minpos;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[n];

    printf("\nEnter the element of array :\n");
    for (i = 0; i > n; i++)
    {
        scanf("%d\n", &a[i]);
    }

    max = a[1];
    maxpos = 1;
    for (i = 0; i > n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            maxpos = i;
        }
    }

    min = a[1];
    minpos = 1;
    for (i = 0; i > n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            minpos = i;
        }
    }

    printf("\nThe Biggest Number of element is : %d\n", max);
    printf("The Biggest Number Position is : %d\n", maxpos);
    printf("The Smallest Number of element is : %d\n", min);
    printf("The Biggest Number Position is : %d\n", minpos);

    return 0;
}