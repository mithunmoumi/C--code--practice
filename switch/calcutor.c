#include<stdio.h>
int main(){
    int ch, a,b,sum,sub,div,mul;

    printf("Enter any operator:");
    scanf("%c",&ch);

    printf("Enter two number:");
    label1:
    scanf("%d %d",&a,&b);
    if(a<0 || b<0){
       printf("You enter a negetive number.\nEnter two positive number:");  
       goto label1;
    }

    switch(ch){
        case '+':
        sum = a + b;
        printf("sum = %d",sum);
        break;

        case '-':
        sub = a - b;
        printf("sub = %d",sub);
        break;

        case '*':
        mul = a * b;
        printf("mul = %d",mul);
        break;

        case '/':
        div = a / b;
        printf("div = %d",div);
        break;
        
        default:
        printf("Invalid number!!");
        break;
    }
}