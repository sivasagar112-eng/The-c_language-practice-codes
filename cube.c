#include <stdio.h> 
int main()  
{ 
    int n, i; 
    printf("Enter a positive integer n (>= 0): "); 
    scanf("%d", &n); 
    if (n < 0) 
    { 
        printf("n must be >= 0\n"); 
        return 0; 
    } 
    printf("\nNumber\tSquare\tCube\n"); 
    for (i = 1; i <= n; i++) 
     { 
        printf("%d\t%d\t%d\n", i, i * i, i * i * i); 
    } 
    return 0; 
} 