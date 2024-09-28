
/*
#include<stdio.h>

int main(){
    int num , temp, r, sum=0;

    printf("Enter any positive number:");
    scanf("%d",&num);
    temp = num;

    while(temp !=0){
        r = temp % 10;
        sum = sum  + r * r * r;
     temp =temp / 10;
    }
    if(sum == num)
    printf("This is a Armstrong number.");
    else
     printf("This is not a Armstrong number.");
    
}*/




/*#include<stdio.h>

int main(){
    int num , temp, r,i, sum=0;

     //printf("Enter any positive number:");
    //scanf("%d",&num);

    for(i=1; i<= 1000; i++){
        temp = num;

    while(temp !=0){
        r = temp % 10;
        sum = sum  + r * r * r;
        temp =temp / 10;
    }
    if(sum == num)
    printf("%d\n",num);
    
    }

   
    
    
}*/


#include<stdio.h>

int main(){
    int initialnum ,finalnum, temp, r,i, sum=0;

     printf ("Enter initial number:");
    scanf("%d",&initialnum); 

    
     printf ("Enter final number:");
    scanf("%d",&finalnum);   
    

    for(i= initialnum; i<= finalnum; i++){
        temp = i;

    while(temp !=0){
        r = temp % 10;
        sum = sum  + r * r * r;
        temp =temp / 10;
    }
    if(sum == i){
         printf("%d\n",i);
    }
   sum=0;
    
    }  
    
}