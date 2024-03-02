#include <stdio.h>

int main()
{

    int a[5], i, s = 0, n;
    float avg;
    char name[20];

    printf("Enter the limis of students: ");

    scanf("%d", &n);

    printf("Enter the height of the students: ");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        s = s + a[i];
    }

    printf("The students heights are:\n ");

    for (i = 0; i < n; i++)
    {
        printf("height are: %d \n", a[i]);
    }
    printf("The sum of the height of the students is: %d \n", s);

    printf("The average of height is: %.1f", ((float)s / n));

    return 0;
}