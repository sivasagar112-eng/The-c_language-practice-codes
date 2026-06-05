//Find power
// #include <stdio.h>
// #include <math.h>

// int main(){
//     int base , exponent, res ;
//     printf("Enter the base : \n");
//     scanf("%d",&base);

//     printf("Enter the exponent : \n");
//     scanf("%d",&exponent);

//     res = pow(base,exponent);

//     printf("%d raised to the power %d is %d",base,exponent,res);
//     return 0;
// }

//Find square root 

#include <stdio.h>
#include <math.h>

int main(){
    int num,squareroot;
    printf("Enter the number : ");
    scanf("%d",&num);

    squareroot = sqrt(num);
    printf("The square root is %d is %d", num , squareroot);
    return 0;
}
