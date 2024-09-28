//How to create a resturent menu bar.
#include<stdio.h>
int main(){
int num;
printf("Food Menu:");
printf("\n1) kacchi");
printf("\n2) chiken birrani");
printf("\n3) matun birrani");
printf("\n4) Teharri");
printf("\n5) Drink");
printf("\n6) Deserts");
printf("\n7) Biff curry");
printf("\n8) Bearger");

printf("\n\npress now:");
scanf("%d",&num);

switch(num){
    case 1:
    printf("\nkacchi 1 - 320 taka");
    printf("\nkacchi 1:2 - 799 taka");
    printf("\nkacchi 1:3 - 1200 taka");
    break;
     case 2:
    printf("\nchiken birrani 1 - 320 taka");
    printf("\nchiken birrani  1:2 - 600 taka");
    printf("\nchiken birrani  1:3 - 1000 taka");
    break;
    
     case 3:
    printf("\nmatun birrani 1 - 400 taka");
    printf("\nmatun birrani 1:2 - 850 taka");
    printf("\nmatun birrani 1:3 - 1300 taka");
    break;
    
     case 4:
    printf("\nTeharri 1 - 300 taka");
    printf("\nTeharri 1:2 - 700 taka");
    printf("\nTeharri 1:3 - 1000 taka");
    break;
    case 5:
    printf(" \ncoka cola:");
    printf("\n1) coka cola 250ml -50");
    printf("\n2) coka cola 500ml -100");
    printf("\n3) coka cola 1l -150");


    printf("\n\n Borhani:");
    printf("\n1) Borhani 250ml -50");
    printf("\n2) Borhani 500ml -100");
    printf("\n3) Borhani 1l -150");
    

    printf("\n\n Nut juice:");
    printf("\n1) Nut juice 250ml -50");
    printf("\n2)Nut juice 500ml -100");
    printf("\n3)Nut juice 1l -150");
    break;

    
}
}