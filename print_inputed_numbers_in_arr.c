#include<stdio.h>
int main(){
	int n[5];
	printf("Enter the number : ");
	for(int i = 0;i<5;i++){
		scanf("%d",&n[i]);
	}
	printf("The inputed numbers are : ");
	for(int i = 0;i<5;i++){
		printf("%d\t",n[i]);
	}
	
	return 0;
}