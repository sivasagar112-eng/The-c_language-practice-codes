#include <stdio.h>
int main()
{
    int num, temp, digit, divisor = 1;
    printf("\n Enter an integer: ");
    scanf("%d", &num);
    // Convert negative numbers to positive for extraction
    int n = (num < 0) ? -num : num;
    if (n == 0)
    {
        printf("Digits: 0\n");
        return 0;
    }
    // --- Right to Left Extraction ---
    printf("\n Right to Left\n");
    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;
        printf("%d ", digit);
        temp /= 10;
    }
    // --- Left to Right Extraction ---
    printf("\n Left to Right\n");
    temp = n;
    divisor = 1;
    int copy = temp;
    while (copy >= 10)
    {
        divisor *= 10;
        copy /= 10;
    }
    while (divisor > 0)
    {
        digit = temp / divisor;
        printf("%d ", digit);
        temp %= divisor;
        divisor /= 10;
    }
    printf("\n");
    return 0;
}