#include<stdio.h>
int main(){
    int num;
    printf("enter any positive number:");
    scanf("%d",&num);

    for(int i =1; i<=10; i++){
          printf("%d*%d=%d\n",num,i,num*i);
    }
  


   /*int n;
   printf("Enter a number:");
   label:
   scanf("%d",&n);

   if (n<0){
    printf("Invalid number!!\nEnter a another number:");
    goto label;
   }
   else{
    for(int i=1; i<=10;i++){
        printf("%d*%d=%d\n",n,i,n*i);
        
    }

   }*/
    return 0;
}