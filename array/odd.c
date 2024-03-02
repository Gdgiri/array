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

    for (int i = 1; i <= limit; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d= 0 \n", a[i]);
        }
        else
        {

            int count = 0;
            for (int j = 1; j <= limit; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                }
                j
            }
            if (count > 1)
            {
                printf("%d isrepeat odd \n", a[i]);
            }
        }
    }

    return 0;
}