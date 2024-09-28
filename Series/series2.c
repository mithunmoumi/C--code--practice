#include<stdio.h>
int main(){
    int num ,i,sum=0;
    printf("Enter any last number:");
    scanf("%d",&num);

    printf("1 + 2 + 3 +............+ %d",num);

    i = 1;
    while( i<= num){
        sum = sum + i;
        i= i + 1;
    }
    printf(" = %d\n",sum);


}