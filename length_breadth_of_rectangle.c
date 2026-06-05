#include<stdio.h>
int main(){
	int length,breadth,perimeter,area;
	printf("Enter length and breadth : ");
	scanf("%d %d",&length,&breadth);
	perimeter = 2 *(length+breadth);
	area = length*breadth;
	printf("The perimeter and area is %d and %d ",perimeter,area);
	return 0;
}