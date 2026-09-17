// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab4-q1-grading-lab-ex
*/


#include <stdio.h>
int main(){
    int score;
    
    do{
        scanf("%d ",&score);
        if(score<=100&&score>=70){
            printf("Outstanding");
        }
        else if(score<=70&&score>=50){
            printf("Pass");
        }
        else if(score<=50&&score>=00){
            printf("Fail");
        }
        else{
            printf("invalid score\n");
        }
    }while(score>100||score<0);


    return 0;
}