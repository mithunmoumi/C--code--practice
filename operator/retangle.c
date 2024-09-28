
//Find out the retangle area peramiter?
#include<stdio.h>
#include<math.h>
int main(){

int lenght,width,area, perimeter;

printf("Enter the number of lenght:");
scanf("%d", &lenght);

printf("Enter thenumber of width:");
scanf("%d",&width);

area=lenght*width;
perimeter=2*(lenght+width);

printf("Result of rectangle area=%d\n", area);
printf("Result of rectangle perimeter=%d\n", perimeter);

return 0;
}