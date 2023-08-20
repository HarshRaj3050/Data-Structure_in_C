#include <stdio.h>

int seriesSum(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n + seriesSum(n - 1);
    }
}

int main()
{
    int n, sum;
    printf("Enter the number : ");
    scanf("%d", &n);

    sum = seriesSum(n);
    printf("\nThe sum of all the n intger is : %d", sum);
    return 0;
}