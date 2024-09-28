//Findout even or odd number.

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num%2==0){
        printf("This number is even number.");
    } else if (num%2!=0){
        printf("This number is odd number.");
    }
    return 0;
}