// #include <stdio.h>

// int main(){
//     int i;
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d x %d = %d\n", n ,i, n*i);
//     }
    
//     return 0;
// }

#include <stdio.h> 
int main()  
{ 
    int i; 
    printf("Multiplication table of 1 (up to 10 rows):\n"); 
    for (i = 1; i <= 10; i++) 
    { 
        printf("1 x %d = %d\n", i, 1 * i); 
    } 
return 0; 
} 