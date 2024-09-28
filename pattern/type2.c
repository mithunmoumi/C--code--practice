#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter n:");
    scanf("%d",&n);

    for(row=n; row>=1; row--){

        for(col=1;col<=row; col++){
            printf("%d ",col);              //printf("%d ",row); 
        }
        printf("\n");
    }
}
 //binnary:
 //printf("%d ",row%2); 
  //printf("%d ",col%2);

  //chatecter: 
   //printf("%c ",row+64); 
    //printf("%c ",row+96); 
     //printf("%c ",col+64); 
      //printf("%c ",col+96); 

      //spatialcherecter:
       //printf("* "); 