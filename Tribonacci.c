#include <stdio.h>
int main()
{
    int n;
    int t1 = 0, t2 = 0, t3 = 1, next;
    printf("Enter the number of terms (n > 0): ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("\n Please enter a value greater than 0.\n");
    }
    else
    {
        printf("Tribonacci Sequence: ");
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                printf("%d", t1);
            }
            else if (i == 2)
            {
                printf(", %d", t2);
            }
            else if (i == 3)
            {
                printf(", %d", t3);
            }
            else
            {
                next = t1 + t2 + t3;
                printf(", %d", next);
                t1 = t2;
                t2 = t3;
                t3 = next;
            }
        }
        printf("\n");
    }
    return 0;
}