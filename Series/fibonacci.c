#include<stdio.h>
int main(){
    int n, fibo,count=0, f1=0,s1=1;
    printf("Enter n:");
    scanf("%d",&n);
    while(count<n){

        if(count<=1){
            fibo=count;
        }
        else{
            fibo=f1+s1;
            f1=s1;
            s1=fibo;
        }
        printf("%d ",fibo);
        count++;
    }


}