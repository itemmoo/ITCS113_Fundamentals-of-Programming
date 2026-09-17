// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab3-q8-collatz-report
*/
#include <stdio.h>

int main() {
    int num,step=0,max;
    scanf("%d", &num);

    if(num == 1){
        printf("%d",num);
    }
    else{
        printf("%d ",num);
    }

    max = num;

    while(num !=1){
        if(num%2==0){
            num = num/2;
        }
        else{
            num = 3*num + 1;      
        }
        if(num > max){
            max = num;
        }
        if(num == 1){
            printf("%d",num);
        }
        else{
            printf("%d ",num);
        }
        step++;
    }
printf("\n");
printf("steps: %d\n",step);
printf("max: %d",max);
    return 0;
}