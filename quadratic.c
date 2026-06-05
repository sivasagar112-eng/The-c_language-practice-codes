// #include <stdio.h>
// #include <math.h>

// int main() {
//     double a, b, c, discriminant, root1, root2, realPart, imagPart;

//     printf("Enter coefficients a, b and c: ");
//     scanf("%lf %lf %lf", &a, &b, &c);

//     if (a == 0) {
//         printf("This is not a quadratic equation because a = 0.\n");
//         return 0;
//     }

//     discriminant = b*b - 4*a*c;

//     if (discriminant > 0) {
//         root1 = (-b + sqrt(discriminant)) / (2*a);
//         root2 = (-b - sqrt(discriminant)) / (2*a);
//         printf("Two real and distinct roots:\n");
//         printf("Root 1 = %.3lf\n", root1);
//         printf("Root 2 = %.3lf\n", root2);
//     }
//     else if (discriminant == 0) {
//         root1 = -b / (2*a);
//         printf("One real root (repeated):\n");
//         printf("Root = %.3lf\n", root1);
//     }
//     else {
//         realPart = -b / (2*a);
//         imagPart = sqrt(-discriminant) / (2*a);
//         printf("Complex roots:\n");
//         printf("Root 1 = %.3lf + %.3lfi\n", realPart, imagPart);
//         printf("Root 2 = %.3lf - %.3lfi\n", realPart, imagPart);
//     }

//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2, realpart, imgpart;
    printf("Enter coefficients a ,b and c : \n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0)
    {
        printf("This is not a quadratic equation because a = 0.\n");
        return 0;
    }
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant) / 2 * a);
        root2 = (-b - sqrt(discriminant) / 2 * a);
        printf("Two real and distinct roots are : \n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("One real root (repeated) : \n");
        printf("Root = %.2f\n", root1);
    }
    else
    {
        realpart = -b / (2 * a);
        imgpart = sqrt(-discriminant) / (2 * a);
        printf("Complex roots : \n");
        printf("Root 1 = %.2f + %.2fi\n", realpart, imgpart);
        printf("Root 2 = %.2f - %.2fi\n", realpart, imgpart);
    }

    return 0;
}
