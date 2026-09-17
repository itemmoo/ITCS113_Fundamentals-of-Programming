// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab4-q4-guesing-game
*/
#include <stdio.h>
int main(){
    int num,round=0;

    do {
        scanf("%d",&num);
        if(num < 42){
            printf("too low\n");
        }
        else if (num>42){
            printf("too high\n");
        }
        round++;
        
    }while(num!=42 && round<5);
    
    if(num==42 && round<5){
        printf("You WIN :)");
    }
    else{
        printf("You LOSE :(");
    }


    return 0;
}