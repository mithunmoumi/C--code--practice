//how many month of a season.

#include<stdio.h>

int main()
{
int num;
printf("1) Summer season");
printf("\n2) Rainy season");
printf("\n3) Autunm season");
printf("\n4) Late autunm season");
printf("\n5) Winter season");
printf("\n6) spring season");

printf("\n\nEnter number - ");
scanf("%d",&num);

switch(num){
    case 1:
    printf("\nyou have choised number 1");
    printf("\nSummer has two month junnary & frebruary");
    break;

    case 2:
    printf("\nyou have choised number 2");
    printf("\nRainy has two month march & april");
    break;
    case 3:
    printf("\nyou have choised number 3");
    printf("\nAutunm has two month may & june");
    break;
    case 4:
    printf("\nyou have choised number 4");
    printf("\nLate autunm has two month july & auguest");
    break;

    case 5:
    printf("\nyou have choised number 5");
    printf("\nWinter has two month september & october");
    break;
    case 6:
    printf("\nyou have choised number 6");
    printf("\nSpring has two month november & december");
    break;

}

    }
