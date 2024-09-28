
#include<stdio.h>

int main(){
    int num , temp, r, sum=0;

    printf("Enter any positive number:");
    scanf("%d",&num);
    temp = num;

    while(temp !=0){
        r = temp % 10;
        sum = sum *10 + r;
        temp =temp / 10;
    }
    if(num == sum)
    printf("This is a palindrome number.");
    else
     printf("This is not a palindrome number.");
}