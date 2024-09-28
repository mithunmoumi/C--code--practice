#include<stdio.h>
int main(){
    //sum of 1 to 10.
int sum=0;
printf("enter a number:");
scanf("%d",&sum);

for(int i=1;i<=10;i++ ){
    sum +=i;
    printf("sum of %d is %d\n",i,sum);
}

   /*for(int i=1; i<=10;i++){
        printf("%d)jannatul ferdous\n",i);
    }
   */ 
    return 0;
}