// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab4-q5-print-num-seq
*/
#include <stdio.h>
int main(){
    int Start,End,step;
    scanf("%d %d %d",&Start,&End,&step);

    for(int i = Start;i<=End;i += step){
        if(i + step > End ){
            printf("%d",i);
        }
        else{
            printf("%d-",i);
        }
    }

    return 0;
}