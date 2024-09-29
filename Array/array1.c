#include<stdio.h>
int main(){
   /* //array decleration

    int numbers[5]={10,20,30,40,10};        //int numbers[]={10,20,30,40,10};

    //array initialization

    numbers[0]=10;
    numbers[1]=20;
    numbers[2]=30;
    numbers[3]=40;
    numbers[4]=10;

    //array scaning
    scanf("%d",&numbers[0]);
    scanf("%d",&numbers[1]);
    scanf("%d",&numbers[2]);
    scanf("%d",&numbers[3]);
    scanf("%d",&numbers[4]);
    
    //array printing

    printf("%d\n",numbers[0]);
    printf("%d\n",numbers[1]);
    printf("%d\n",numbers[2]);
    printf("%d\n",numbers[3]);
    printf("%d\n",numbers[4]);
*/

//array modify
/*
int numbers[5];

for(int index=0; index<5;index++){
    printf("number [%d]:",index+1);      //printf("number [%d]:",index);  //output=number[0]:
    scanf("%d",&numbers[index]);
}

for(int index=0; index<5; index++){
    printf("%d\n",numbers[index]);
}

*/
//array addition

int numbers[5],sum=0;
float average;

for(int index=0; index<5; index++){
    printf("number [%d]:",index);      //printf("number [%d]:",index+1);  //output=number[1]:
    scanf("%d",&numbers[index]);
}

for(int index=0; index<5; index++){
    sum = sum + numbers[index];  
}
 printf("sum of index number=%d\n",sum);

  average = (float)sum / 5;
  printf("Average of index number=%.2f\n",average);


}