#include <stdio.h>
int main()
{
    int digit;
    int finalNumber = 0;
    printf("Enter digits one by one (enter -1 to stop):\n");
    // Sentinel controlled loop
    while (1)
    {
        scanf("%d", &digit);
        if (digit == -1)
        {
            break;
        }
        if (digit < 0 || digit > 9)
        {
            printf("\n Please enter a single digit between 0 and 9.\n");
            continue;
        }
        finalNumber = (finalNumber * 10) + digit;
    }
    printf("The output number is: %d\n", finalNumber);
    return 0;
}
