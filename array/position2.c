#include <stdio.h>

int main()
{
    int a[20], limit, search;

    printf("Enter the Limit: ");
    scanf("%d", &limit);

    printf("Enter the values: ");
    for (int i = 1; i < limit; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the search value: ");
    scanf("%d", &search);

    for (int i = 1; i < limit; i++)
    {
        if (search == i)
        {
            printf("The position is: %d", a[i]);
        }
    }
    return 0;
}