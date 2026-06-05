#include <stdio.h>
int main()
{
    double a, d_r;
    int n, choice;
    printf("Choose the progression type:\n");
    printf("1. Arithmetic Progression (AP)\n");
    printf("2. Geometric Progression (GP)\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);
    printf("Enter the first term (a): ");
    scanf("%lf", &a);
    printf("Enter the difference/multiplier (d/r): ");
    scanf("%lf", &d_r);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    printf("\nThe first %d terms are:\n", n);
    double current_term = a;
    for (int i = 1; i <= n; i++)
    {
        printf("%.2lf", current_term);

        if (i < n)
            printf(", ");
        if (choice == 1)
        {
            current_term += d_r; // AP logic
        }
        else
        {
            current_term *= d_r; // GP logic
        }
    }
    printf("\n");
    return 0;
}