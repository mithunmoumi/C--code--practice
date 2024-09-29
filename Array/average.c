#include<stdio.h>
int main(){
    
int subject[5],sum=0;
float average;

for(int index=0; index<5; index++){
    printf("subject number [%d]:",index+1);      //printf("number [%d]:",index+1);  //output=number[1]:
    scanf("%d",&subject[index]);
}

for(int index=0; index<5; index++){
    sum = sum + subject[index];  
}
 printf("sum of subject number=%d\n",sum);

  average = (float)sum / 5;
  printf("Average of subject number=%.2f\n",average);

}