// #include <stdio.h>

// int main(){
//     int mat[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
//     printf("The matrix are : \n");
//     for(int i = 0;i<3;i++){
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d  ",mat[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int i, j, r, c;
    printf("\nEnter no. of rows : ");
    scanf("%d", &r);
    printf("\nEnter no. of columns : ");
    scanf("%d", &c);
    int mat[r][c];
    printf("\nEnter the elements of %d X %d  ", r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\nEnter the elements at mat[%d][%d] : ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nThe matirx is : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}