#include<stdio.h>
int main(){
	int a,b,c,temp;
	printf("Enter three numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		temp = a;
		a = b;
		b = temp;
	}
	if(b>c){
		temp = b;
		b = c;
		c = temp;
	}
	if(a>b){
		temp = a;
		a = b;
		b = temp;
	}
	printf("The sorted numbers are %d %d %d",a,b,c);
	return 0;
}