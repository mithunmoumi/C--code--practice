//check a trinangle is valid or not.

#include<stdio.h>
int main(){
    int n1,n2,n3,sum;
    printf("Enter three number:");
    scanf("%d %d %d",&n1,&n2,&n3);
    sum= n1+n2 +n3;
    if(sum==180 && n1<0 && n2<0 && n3<0){
        printf("This is a triangle");
    }
    else{
         printf("This is not a triangle");
    }

}