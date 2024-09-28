
//col result

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
}

//row result

/*#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter n:");
    scanf("%d",&n);

    for(row=1; row<=n; row++){

        for(col=1;col<=row; col++){
            printf("%d ",row);
        }
        printf("\n");
    }
}*/

//binnary result

/*#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter n:");
    scanf("%d",&n);

    for(row=1; row<=n; row++){

        for(col=1;col<=row; col++){
            printf("%d ",col%2);       //printf("%d ",row%2);
        }
        printf("\n");
    }
}*/

//charecter result

/*#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter n:");
    scanf("%d",&n);

    for(row=1; row<=n; row++){

        for(col=1;col<=row; col++){
            printf("%c ",col+64);      //printf("%c ",col+96); ////printf("%c ",row+64);//printf("%c ",row+96);
        }
        printf("\n");
    }
}*/

//specialcharecter result

/*#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter n:");
    scanf("%d",&n);

    for(row=1; row<=n; row++){

        for(col=1;col<=row; col++){
            printf("* ");
        }
        printf("\n");
    }
    }*/