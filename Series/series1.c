#include<stdio.h>
int main(){
    int num,i, sum=0;
    printf("Enter any last number:");
    scanf("%d",&num);

    printf("1 + 2 + 3 +............+ %d",num);

    for(i = 1; i<= num; i++){
        sum = sum + i;
    }
    printf(" = %d\n",sum);

//even number:
   /* int num,i, sum=0;
    printf("Enter any last number:");
    scanf("%d",&num);

    printf("2 + 4 + 6 +............+ %d",num);

    for(i = 2; i<= num; i=i+2){
        sum = sum + i;
    }
    printf(" = %d\n",sum);

    //odd number:
    int num,i, sum=0;
    printf("Enter any last number:");
    scanf("%d",&num);

    printf("1 + 3 + 5 +............+ %d",num);

    for(i = 1; i<= num; i=i+2){
        sum = sum + i;
    }
    printf(" = %d\n",sum);*/
}
