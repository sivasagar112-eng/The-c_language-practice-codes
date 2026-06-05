#include <stdio.h> 
int main() 
{ 
int num_int = 10; 
float num_float = num_int;    // Implicit conversion from int to float 
printf("num_float: %f\n", num_float); 
int a = 5; 
float b = 2.5; 
float result = a + b;    // Implicit conversion of 'a' from int to float 
printf("result: %f\n", result); 
return 0; 
} 