#include<stdio.h>
int main(){
    int array1[30], array2[30],n,i;
    printf("How many number in a array1:");
    scanf("%d",&n);

    for( i=0; i<n; i++){
        scanf("%d ",&array1[i]);
    }

    printf("Array1: ");
    for( i=0; i<n; i++){
        printf("%d ",array1[i]);
    }
    printf("\n");


    for(i=0; i<n; i++){
        array2[i]=array1[i];
    }


    printf("Array2: ");
    for( i=0; i<n; i++){
        printf("%d ",array2[i]);
    }
    printf("\n");

}