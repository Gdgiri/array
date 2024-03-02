#include <stdio.h>

int main()
{
    int a[20], limit;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Enter the values: ");

    for (int i = 1; i <= limit; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The values: ");
    for (int i = 1; i <= limit; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d=a \n", a[i]);
        }
        else
        {
            printf("%d \n", a[i]);
        }
    }

    return 0;
}