#include <stdio.h>

int main()
{

    int a[20], limit, i, s;

    printf("Enter the number: ");
    scanf("%d", &limit);

    printf("Enter the values: ");
    for (i = 1; i <= limit; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i <= limit; i++)
    {
        for (int j = 1; j <= limit; j++)
        {
            if (a[i] > a[j])
            {
                s = a[i];
                a[i] = a[j];
                a[j] = s;
            }
        }
    }
    printf("The greatest value: ");

    for (int i = 1; i <= limit; i++)
    {
        printf(" %d\n", a[i]);
    }
}