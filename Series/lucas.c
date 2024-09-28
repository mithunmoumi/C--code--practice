#include<stdio.h>
int main(){
    int num,result;
    printf("Enter num:");
    scanf("%d",&num);
    int f1=2, s1=1;
    printf("lucas series up to %d terms:\n",num);
    printf("%d %d ",f1,s1);
    for(int i=3;i<=num;i++){
        result=f1+s1;
        f1=s1;
        s1=result;
        printf("%d ",result);
    }
printf("\n");
}