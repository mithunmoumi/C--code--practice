#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main(){
    int num1, num2, n1, n2, rem, gcd, lcd;

    printf("Enter any two number:");
    scanf("%d %d",&num1,&num2);

    n1= num1;
    n2= num2;
    while(n2!=0){
        rem= n1 % n2;
        n1= n2;
        n2= rem;
    }
    gcd= n1;
    lcd= (num1*num2)/gcd;
    printf("GCD is:%d\n",gcd);
    printf("LCD is:%d\n",lcd);


    getch();
}
