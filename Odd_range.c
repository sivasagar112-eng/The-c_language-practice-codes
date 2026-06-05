#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a positive integer : ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("\n It must be a positive integer.\n");
        return 0;
    }
    printf("Odd numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0) // check if i is odd
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
