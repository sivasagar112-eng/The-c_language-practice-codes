#include <stdio.h>
int main()
{
    int n, reversedNum = 0, remainder, originalNum;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    originalNum = n;
    while (n != 0)
    {
        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }
    if (originalNum == reversedNum)
    {
        printf("%d is a palindrome.\n", originalNum);
    }
    else
    {
        printf("%d is not a palindrome.\n", originalNum);
    }
    return 0;
}