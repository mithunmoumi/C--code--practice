#include<stdio.h>
int main (){
    int num;
    printf("Enter the number=");
    scanf("%d",&num);

    if(num==1){
        printf("saturday");
    }
     else if(num==2){
        printf("sunday");
    }  else if(num==3){
        printf("monday");
    }  else if(num==4){
        printf("tuesday");
    }  else if(num==5){
        printf("wednesday");
    }
      else if(num==6){
        printf("thurseday");}  
      else if(num==7){
        printf("friday");}
        else if ( num==0 ||num<0 || num>7 ){
            printf("invalid number");
        }
    
}