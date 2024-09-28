#include<stdio.h>
int main(){
    int num,i, sum=0;
    printf("Enter any last number:");
    scanf("%d",&num);

    //printf("1 + 2 + 3 +............+ %d",num);

    for(i = 1; i<= num; i++){
        sum = sum + i;
        if(i==1)
        printf("%d +",i);
        else if(i==num)
        printf("%d",i);
        else
        printf("%d +",i);

    }
    printf(" = %d\n",sum);
}