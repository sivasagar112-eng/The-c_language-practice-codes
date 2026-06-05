#include <stdio.h>

int main(){
    int n,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
// #include <stdio.h>

// int main(){
//     int n,i,j;
//     printf("Enter the number of rows : ");
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){
//         for(int j =i;j<=n;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n,i,j,k;
//     printf("Enter no. of rows : ");
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){
//         for(int j = i;j<5;j++){
//             printf(" ");
//         }
//         for(int k = 1;k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n,i,j,k;
//     printf("Enter the no. of rows : ");
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){
//         for(int j = 1;j<i;j++){
//             printf(" ");
//         }
//         for(int k = i;k<=n;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }