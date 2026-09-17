// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab2-q4-tax
*/

#include <stdio.h>
int main(){
    float income;
    scanf("%f",&income);
    if(income<25000){
        printf("%.2f\n",(income*0.1));
    }
    else{
        printf("%.2f\n",(income*0.15));
    }
    return 0;
}