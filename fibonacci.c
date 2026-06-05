#include <stdio.h>
int main()
{
    int n;
    int first = 0, second = 1, next;
    printf("Enter the number of terms (n > 0): ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printf("Fibonacci Sequence: ");
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                printf("%d", first);
            }
            else if (i == 2)
            {
                printf(", %d", second);
            }
            else
            {
                next = first + second;
                first = second;
                second = next;
                printf(", %d", next);
            }
        }
        printf("\n");
    }
    return 0;
}