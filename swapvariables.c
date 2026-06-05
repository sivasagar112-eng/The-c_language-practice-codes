// #include <stdio.h>

// int main()
// {
// // Using a third variable
//     int n1, n2, temp;
//     printf("Enter two numbers : \n");
//     scanf("%d %d", &n1, &n2);
//     printf("Before swaping the variables n1 = %d and n2  = %d \n", n1, n2);

//     temp = n1;
//     n1 = n2;
//     n2 = temp;

//     printf("After swaping the variables n1 = %d and n2 = %d \n", n1, n2);

//     return 0;
// }

// Without Using third variable

#include <stdio.h>

int main(){
    int n1, n2, temp;
    printf("Enter two numbers : \n");
    scanf("%d %d", &n1, &n2);
    printf("Before swaping the variables n1 = %d and n2  = %d \n", n1, n2);

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    printf("After swaping the variables n1 = %d and n2 = %d \n", n1 , n2 );
    return 0;
}