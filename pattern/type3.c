#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter n:");
    scanf("%d",&n);

    for(row=1; row<=n; row++){

        for(col=1;col<=row; col++){
            printf("%d ",col);
        }
        printf("\n");
    }
     for(row=n-1; row>=1; row--){

        for(col=1;col<=row; col++){
            printf("%d ",col);             
        }
        printf("\n");
    }
}

/*#include<stdio.h>
int main(){
    int n, row,col;
    printf("Enter n:");
    scanf("%d",&n);

    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("* ");
        }
        printf("\n");
    }

    for(row=n-1; row>=1; row--){
        for(col=1; col<=row; col++){
            printf("* ");
        }
        printf("\n");
    }
}*/
