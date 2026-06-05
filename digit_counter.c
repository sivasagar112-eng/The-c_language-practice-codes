// DIGIT COUNTER
#include <stdio.h>

int main(){
	int num,count = 0;
	printf("Enter the no: ");
	scanf("%d",&num);
	while (num != 0)
	{
		count++;
		num = num/10;
	}
	printf("The digits are : %d",count);
	
	return 0;
}