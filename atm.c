#include <stdio.h>

int main()
{
    int choice;
    float amount;
    float money = 1000.00;
    printf("\t========== ATM MENU ==========\n");
    printf("\t1.Check your Balance\n");
    printf("\t2.Deposit Money\n");
    printf("\t3.Withdraw Money\n");
    printf("\t4.Exit\n");
    printf("\n\tEnter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\tAvailabel Money is : %.2f \n", money);
        printf("\n\tThank You !!");
        break;

    case 2:
        printf("\tAvailabel Money is : %.2f \n", money);
        printf("\n\tEnter amount to Deposit : ");
        scanf("%f", &amount);
        if (amount >= 0)
        {
            printf("\n\tPrevious money was : %.2f \n", money);
            money += amount;
            printf("\n\tDeposited money :%.2f \n", amount);
            printf("\n\tTotal amount : %.2f \n", money);
            printf("\n\tThank You !!");
        }
        break;

    case 3:
        printf("\tAvailabel Money is : %.2f \n", money);
        printf("\n\tEnter amount to Withdraw : ");
        scanf("%f", &amount);
        if (amount > money)
        {
            printf("\tInsufficient Balance\n");
        }
        else
        {
            printf("\n\tPrevious money : %.2f \n", money);
            money -= amount;
            printf("\tWithdraw money : %.2f ", amount);
            printf("\n\tTotal amount : %.2f ", money);
            printf("\n\tThank You !!");
        }
        break;

    case 4:
        printf("\n\tThank You Visit Again!!!");
        break;

    default:
        printf("\tInvalid Choice");
        printf("\nEnter");
        break;
    }

    return 0;
}