//1*2 +2*2 + 3*2 + 4*2 +...........+ n*2

#include<stdio.h>
int main(){
    int n,i, sum=0;
    printf("Enter any last number:");
    scanf("%d",&n);

    printf("1*2+ 2*2 + 3*2 +............+ %d*2",n);

    for(i = 1; i<= n; i++){
        sum = sum + i*i;
    }
    printf(" = %d\n",sum);
getch();

}