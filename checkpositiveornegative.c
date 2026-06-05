#include <stdio.h>

int main(){
    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n>0){
        printf("%d is a positive number ", n);
    }

    else if(n==0){
        printf("This is zero",n);
    }

    else if(n<0){
        printf("%d is a negative number ",n);
    }
    return 0;
}