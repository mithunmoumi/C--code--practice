
#include<stdio.h>

int main(){
    int num , temp, r,i, fact, sum=0;

    printf("Enter any positive number:");
    scanf("%d",&num);
    temp = num;

    while(temp !=0){
        r = temp % 10;

        fact= 1;
        for(i =1; i<=r; i++){
            fact = fact * i;
        }
        sum = sum  + fact;
        temp =temp / 10;
    }
    if(sum==num)
    printf("%d is a strong number",num);
    else
    printf("%d is not a strong number",num);
}