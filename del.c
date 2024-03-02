
#include <stdio.h>

int main()
{
    int a[100], i, j, count = 0, f, del;
    f = 5;
    printf("Enter the numbers: ");

    for (i = 0; i < f; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the del value:");
    scanf("%d", &del);

    for (i = 0; i < f; i++)
    {
        if (a[i] == del)
        {
            count = 1;
            break;
        }
    }

    if (count)
    {
        for (j = i; j < f - 1; j++)
        {
            a[j] = a[j + 1];
        }
        f--;
        // number del
        printf("array after delet");
        for (i = 0; i < f; i++)
        {
            printf("%d", a[i]);
        }
    }
}