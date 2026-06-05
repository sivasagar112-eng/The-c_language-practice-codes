// REVERSE THE DIGITS
#include<stdio.h>
int main(){
	int r,num;
	int sum = 0;
	printf("Enter the number : ");
	scanf("%d",&num);
	while(num != 0){
		r = num%10;
		printf("%d\t",r);
		num = num/10;
		sum += r;
	}
	printf("\nThe sum is %d",sum);
	return 0;
}