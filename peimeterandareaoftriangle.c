// Perimeter of triangle
//  #include <stdio.h>

// int main(){
//     int a , b, c, perimeter ;
//     printf("Enter the first side of triangle : ");
//     scanf("%d",&a);
//     printf("Enter the second side of triangle : ");
//     scanf("%d",&b);
//     printf("Enter the third side of triangle : ");
//     scanf("%d",&c);

//     perimeter = a + b + c;
//     printf("The perimeter is %d" , perimeter);
//     return 0;
// }

// Area of triangle without using the common formula
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, s, area;

    printf("Enter the the first number : ");
    scanf("%d", &a);
    printf("Enter the the second number : ");
    scanf("%d", &b);
    printf("Enter the the third number : ");
    scanf("%d", &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area is %d", area);
    return 0;
}