#include<stdio.h>
int main(){
    int a[]={10, 20, 30, 60, -2, 4, 100};

    int searchnumber = 60;
    int position = -1;
    for(int i = 0; i<7; i++){
        if(searchnumber == a[i]){
            position=i+1;
            break;
        }
    }

    if(position==-1){
        printf("The searching value of %d is not found.",searchnumber);
    }
    else{
printf("The searching value of %d[%d]",searchnumber,position);
    }

}