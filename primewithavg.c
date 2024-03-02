#include <stdio.h>

int main()
{
    int a[10], i, j, f, n, s = 0, g = 0;

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
            s = s + n;
        }
        else
        {
            printf("%d is  not a prime number \n", n);
            g = g + n;
        }
    }

    printf("The sum of prime is %d \n", s);
    printf("The sum of not prime is %d \n", g);

    printf("The average of prime is %.1f \n", ((float)s / 5));
    printf("The average of not prime is %.1f \n", ((float)g / 5));

    return 0;
}