#include <stdio.h>

int main(){
    int a,b,c,temp;
    printf("Enter the no.s : ");
    scanf("%d %d %d",&a,&b,&c);
    if (a<b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (b<c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (a<b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    printf("In increasing order is %d %d %d",a,b,c);
    return 0;
}