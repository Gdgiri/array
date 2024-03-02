#include <stdio.h>

int main()
{

    int a[20], b;
    printf("Enter the limit: ");
    scanf("%d", &b);

    printf("Enter the number: ");
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }
    
        printf("The value is: %d", a[1]);
    
    return 0;
}