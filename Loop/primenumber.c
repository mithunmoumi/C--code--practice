# include <stdio.h>
# include <math.h>
# include <ctype.h>
int main(){

      //find out prime number.

   int num, count=0;
    printf("enter any positive number:");
    scanf("%d",&num);
    
    if(num<=1){
        count=1;
    }


    for(int i=2; i<= sqrt(num); i++){
        if(num % i == 0){
            count=1;
            break;
        }
    }

    if(count==0){
        printf("%d is prime number",num);
    }
    else{
        printf("%d is not prime number",num);  
    }

   
    //how many prime number 1 to 100.

 /*
 int num, i, count=0, totalPrimeNumbers=0 ,sumOfPrimeNumber=0;
    for( num=1; num<=100; num++){
        count=0;

    if(num<=1){
        count=1;
    }
    else{
          for(i=2; i<=sqrt(num);i++){
        if(num % i == 0){
            count=1;
            break;
        }
    }

    }
    if(count==0){
        printf("%d ", num);
          totalPrimeNumbers++;
          sumOfPrimeNumber=sumOfPrimeNumber+num;
        }
    }
printf("\nTotal prime number is:%d\n",totalPrimeNumbers);
printf("sum of prime number is:%d",sumOfPrimeNumber);
    
return 0;
 */

 /*
  int num, i, count=0, totalPrimeNumbers=0 ,sumOfPrimeNumber=0,startingNumber,endingNumber;

     printf("enter starting number:");
    scanf("%d",&startingNumber);

    printf("enter ending number:");
    scanf("%d",&endingNumber);


    for( num=startingNumber; num<=endingNumber; num++){
        count=0;

    if(num<=1){
        count=1;
    }
    else{
          for(i=2; i<=sqrt(num);i++){
        if(num % i == 0){
            count=1;
            break;
        }
    }

    }
    if(count==0){
        printf("%d ", num);
          totalPrimeNumbers++;
          sumOfPrimeNumber=sumOfPrimeNumber+num;
        }
    }
printf("\nTotal prime number is:%d\n",totalPrimeNumbers);
printf("sum of prime number is:%d",sumOfPrimeNumber);
    
return 0;

 */ 



}