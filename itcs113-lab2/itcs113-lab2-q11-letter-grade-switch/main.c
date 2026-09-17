// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab2-q11-letter-grade-switch
*/
#include <stdio.h>
int main(){
    int score;
    scanf("%d",&score);

    if(score <0 || score >100){
        printf("Invalid");
    }
    else{
        switch(score/10){
            case 10:
            case 9:
                printf("A");
                break;
            case 8:
                printf("B");
                break;
            case 7:
                printf("C");
                break;
            case 6:
                printf("D");
                break;
            default:
                printf("F");
        }
    }


    return 0;
}