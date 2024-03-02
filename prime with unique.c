#include <stdio.h>

int main()
{
    int a[5], i, j, count = 0, f, n;

    printf("Enter the numbers: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        count = 0;
        n = a[i];
        f = 0;

        if (n <= 1)
            f = 1;

        for (j = 2; j < n; j++)
        {
            if (n % j == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
        {
            printf("%d is a prime \n", n);
        }
        else
        {
            printf("%d is not a prime \n", n);
        }

        for (j = 0; j < 5; j++)
        {
            if (i != j && a[i] == a[j])
            {
                count = 1;
                break;
            }
        }

        if (count == 0)
        {
            printf("%d is a unique \n", a[i]);
        }
    }
}