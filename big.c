#include <stdio.h>

int main()
{
    int a[10], i;

    printf("Enter the numbers: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int big = a[0];
    for (i = 1; i < 5; i++)
    {
        if (a[i] > big)
        {
            big = a[i];
        }
    }

    printf("The biggest number is: %d", big);
}