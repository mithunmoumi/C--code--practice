#include<stdio.h>
#include<math.h>
int main(){

//celsius to fahraniat
/*float c,f;
printf("Enter celsius tempure:");
scanf("%f",&c);
f=(c*9/5)+32;
printf("%f celsius to fahraniat is=%.2f",c,f);*/

// fahraniat to celsisus

float f,c;

printf("Enter fahraniat tempure:");
scanf("%f",&f);

c=(f-32)*5/9;

printf("%f fahranait to celsisus is =%f",f,c);  
return 0;
}