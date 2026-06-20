// #include <stdio.h>

// int main(){
//     int x=4,y=4,z=4;
//     if (x == y == z)
//     {
//         printf("Hello");
//     }
//     else{
//         printf("Bye");
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i = 1;
//     (i && 0 == 1)?printf("IN"):printf("OUT");
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i,j,count;
//     count = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             count++;
//         }
        
//     }
//     printf("%d",count);
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int i = 10;
//     do
//     {
//         printf("\t %d",i--);
//     } while (i>5?1:0);
    
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a[7] = {5,10,3,42,25,7};
//     int p,q,r;
//     p = a[0]++;
//     q = a[++p];
//     r = a[q] + a[p];
//     printf("%d\t%d\t%d",p,q,r);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     typedef struct tag
//     {
//         char str[10];
//         int a;
//     }har;
//     har h1,h2 = {"IHelp",10};
//     h1 = h2;
//     h1.str[1] = 'h';
//     printf("%s,%d",h1.str,h2.a);
    
//     return 0;
// }

#include <stdio.h>

int main(){
    int ***r,**q,*p,i = 8;
    p = &i;
    q = &p;
    r = &q;
    printf("%d,%d,%d\n",*p,**q,***r);
    return 0;
}
