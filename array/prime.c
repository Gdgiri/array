#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a[20], limit;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Enter the values: ");

    for (int i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Prime or Not Prime for each value:\n");
    for (int i = 0; i < limit; i++)
    {
        if (isPrime(a[i]))
        {
            printf("%d is a prime number\n", a[i]);
        }
        else
        {
            printf("%d is not a prime number\n", a[i]);
        }
    }

    return 0;
}
