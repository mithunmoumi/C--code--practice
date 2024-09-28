//1 2 3 ......n.
//1 3 5.......n.
//2 4 6.......n.

#include<stdio.h>
int main (){
   /* int n, i;
    printf("Enter n:");
    scanf("%d",&n);

    for(i =1; i<=n; i++){     // for(i =1; i<=n; i=i+2) output: 1 3 5 7..........
                              // for(i =2; i<=n; i=i+2)   output: 2 4 6 8 .........                        
        printf("%d\n",i);
    }*/


// 1+ 2 + 3 +...........+n = ?
int n ,i,sum=0;

 printf("Enter n:");
 scanf("%d",&n);

 for(i = 1; i<=n; i++){

    printf("%d\n",i);

    sum = sum + i;

 }
 printf("sum = %d",sum);




}