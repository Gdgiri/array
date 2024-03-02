#include <stdio.h>

int main()
{

    int a[5], f, s, i;

    printf("Enter the numbers: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    f = a[0];
    s = a[0];

    for (i = 0; i < 5; i++)
    {
        if (a[i] > f)
        {
            s = f;

            f = a[i];
        }

        else if (a[i] > s && a[i] != f)
        {
            s = a[i];
        }
    }

    printf("the second largest number: %d", s);

    return 0;
}