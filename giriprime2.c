#include <stdio.h>

int main()
{
    int a[10], i, j, f, n, r[5];

    printf("Enter the numbers: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
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
            printf("%d is  a prime number \n", n);
        }
        else
        {
            printf("%d is  not a prime number \n", n);
        }
    }

    return 0;
}