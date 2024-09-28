//1x2x3x4x........... n


#include<stdio.h>
int main(){
    int n,i, result=1;
    printf("Enter any last number:");
    scanf("%d",&n);

    printf("1*2*3*............%d",n);

    for(i = 1; i<= n; i++){          //for(i = 1; i<= n; i=i+2)
        result = result *i;          //for(i = 2; i<= n; i=i+2)     
    }
    printf(" = %d\n",result);


}

//1*2 x 2*2 x 3*2 x 4*2 x...........x n*2

/*
#include<stdio.h>
int main(){
    int n,i, result=1;
    printf("Enter any last number:");
    scanf("%d",&n);

   // printf("(1*2) * (2*2 )*( 3*2) *............( %d*2)",n);

    for(i = 1; i<= n; i++){
        result = result * i*i;
    }
    printf(" Result = %d\n",result);


}*/