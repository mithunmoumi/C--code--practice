
#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter n:");
    scanf("%d",&n);

    for(row=1; row<=n; row++){

        for(col=1; col<=n-row; col++){
            printf(" ");
        }

        for(col=1;col<=2*row-1; col++){
            printf("*");
        }
        printf("\n");
    }

    for(row=n-1; row>=1; row--){

        for(col=1; col<=n-row; col++){
            printf(" ");
        }

        for(col=1;col<=2*row-1; col++){
            printf("*");
        }
        printf("\n");
    }
}

//printf("%d",col)
//printf("%d",row)
//printf("%d",col%2)
//printf("%d",row%2)
//printf("%d",col+64)
//printf("%d",col+96)
//printf("%d",row+64)//printf("%d",row+96)

