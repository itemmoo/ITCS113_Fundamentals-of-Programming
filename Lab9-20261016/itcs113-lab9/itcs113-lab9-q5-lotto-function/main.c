// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab9-q5-lotto-function
*/
#include <stdio.h>
int isWinner(int num1, int num2, int winningSum);
int main(){
    int num1,num2,winningSum;
    do{
        scanf("%d",&num1);
    }while(num1<1||num1>10);
    do{
        scanf("%d",&num2);
    }while(num2<1||num2>10);
    scanf("%d",&winningSum);
    int output = isWinner(num1,num2,winningSum);
    printf("%d",output);
    return 0;
}
int isWinner(int num1, int num2, int winningSum){
    if(num1+num2==winningSum){
        return 1;
    }
    return 0;
}
