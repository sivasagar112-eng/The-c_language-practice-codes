// // Perimeter of Rectangle
// #include <stdio.h>

// int main(){
//     int length,breadth,res;
//     printf("Enter the length : \n");
//     scanf("%d",&length);

//     printf("Enter the breadth : \n");
//     scanf("%d",&breadth);

//     res = 2*(length + breadth);

//     printf("The perimeter is %d ", res);

//     return 0;
// }

// Area of Rectangle

#include <stdio.h>

int main(){
    int length,breadth,res;
    printf("Enter the length : \n");
    scanf("%d",&length);

    printf("Enter the breadth : \n");
    scanf("%d",&breadth);

    res = length * breadth;

    printf("The area is %d ", res);
    return 0;
}