#include<stdio.h>
int main(){
    //maximun and minimun number identify.........
    int numbers[] = {20,30,10,50,-4,60};
    int max = numbers[0];
     int min = numbers[0];

    for(int i =1; i<6; i++){
        if(max<numbers[i]){
            max = numbers[i];
        }
         if(min>numbers[i]){
            min = numbers[i];
        }
    }
    printf("maximum number is=%d\n",max);
    printf("minimum number is=%d\n",min);



    //minimum number identify......
    /*
    int numbers[] = {20,30,10,50,-4,60};
    int min = numbers[0];

    for(int i =1; i<6; i++){
        if(min>numbers[i]){
            min = numbers[i];
        }
    }
    printf("minimum number is=%d",min);
    */

    //maximun number identify......
    /*int numbers[] = {20,30,10,50,-4,60};
    int max = numbers[0];

    for(int i =1; i<6; i++){
        if(max<numbers[i]){
            max = numbers[i];
        }
    }
    printf("maximum number is=%d",max);*/
}