#include <stdio.h>
// #include <math.h>

int main(){
    int n1,n2,sum,sub,multi;
    float div;
    printf("Enter a number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);
    sum = n1 + n2;
    sub = n1 - n2;
    multi = n1 * n2;
    div = n1 / n2;
    printf("The sum is %d\n",sum);
    printf("The sub is %d\n",sub);
    printf("The multi is %d\n",multi);
    printf("The div is %.2f\n",div);
    return 0;
}