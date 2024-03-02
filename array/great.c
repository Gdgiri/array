#include <stdio.h>

int main()
{

    int a[20], limit, i;

    printf("Enter the number: ");
    scanf("%d", &limit);

    printf("Enter the values: ");
    for (i = 1; i <= limit; i++)
    {
        scanf("%d", &a[i]);
    }

    int s = a[1];

    for (i = 2; i <= limit; i++)
    {
        if (a[i] > s)
        {
            s = a[i];
        }
    }
    printf("The greatest value: %d", s);
}