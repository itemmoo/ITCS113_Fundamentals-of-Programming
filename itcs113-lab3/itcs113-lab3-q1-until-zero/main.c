// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab3-q1-until-zero
*/

#include <stdio.h>
int main(){
    int num;

    do{
        scanf("%d",&num);
        printf("input: %d",num);
    }while(num!=0);
    printf("finish");
    return 0;
    
}