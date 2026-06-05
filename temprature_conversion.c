#include <stdio.h> 
int main() 
{ 
    float celsius, fahrenheit; 
    printf("Temperature Conversion\n "); 
    printf("-----------------------------"); 
    printf("\n Enter temperature in Celsius: "); 
    scanf("%f", &celsius); 
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;   // C -> F 
    printf("%.2f Celsius = %.2f Fahrenheit ", celsius, fahrenheit); 
    printf("\n"); 
    printf("\n Enter temperature in Fahrenheit: "); 
    scanf("%f", &fahrenheit); 
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;   // F -> C 
    printf("%.2f Fahrenheit = %.2f Celsius ", fahrenheit, celsius); 
    return 0; 
} 