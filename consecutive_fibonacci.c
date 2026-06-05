#include <stdio.h>
int main()
{
    int n1, n2, temp;
    int a = 0, b = 1, next = 0;
    int found = 0;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    // Ensure n1 is the smaller number for consistent checking
    if (n1 > n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    // Special case for the start of the sequence (0, 1 or 1, 1)
    if (n1 == 0 && n2 == 1)
        found = 1;
    if (n1 == 1 && n2 == 1)
        found = 1;
    // Generate Fibonacci terms until we reach or exceed n1
    while (a <= n1 && !found)
    {
        next = a + b;
        a = b;
        b = next;
        if (a == n1 && b == n2)
        {
            found = 1;
            break;
        }
    }
    // Print the result
    if (found)
    {
        printf("%d and %d are consecutive Fibonacci numbers.\n", n1, n2);
    }
    else
    {
        printf("%d and %d are NOT consecutive Fibonacci numbers.\n", n1, n2);
    }
    return 0;
}