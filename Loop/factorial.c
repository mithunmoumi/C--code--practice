#include<stdio.h>
int main(){
    int num,fact=1;
    printf("enter any positive number:");
    scanf("%d",&num);

    for(int i=1; i<=num; i++){
         fact=fact*i;
    }
   
    printf("the factorial of %d is %d",num,fact);

   /*int n, fact=1;
   printf("Enter a number:");
   label:
   scanf("%d",&n);

   if (n<0){
    printf("Invalid number!!\nEnter a another number:");
    goto label;
   }
   else{
    for(int i=1; i<=n;i++){
        fact=i*fact;
         
        
    }
   printf("factorial of %d :%d",n,fact);
   }*/
    return 0;
}