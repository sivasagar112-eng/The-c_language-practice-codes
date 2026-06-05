#include<stdio.h> 
int main() 
{ 
	int num,i,sum=0; 
	for(i=1;i<=5;i++) 
	{ 
		printf("\n Enter positive integers:"); 
		scanf("%d",&num); 
		if(num<0) 
		{ 
			printf("\n Sorry, You entered a negative number"); 
			continue; 
		} 
		sum+=num;  
	}
		printf("\n The sum result of integers are: %d ",sum); 
		return 0; 
} 