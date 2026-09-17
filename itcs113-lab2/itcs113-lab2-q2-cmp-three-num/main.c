// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab2-q2-cmp-three-num
*/

#include <stdio.h>
int main(){

    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1==num2 && num1==num3 && num2==num3){
        printf("all the same\n");
    }
    else if (num1!=num2 && num1!=num3 && num2!=num3){
        printf("all different\n");
    }
    else{
        printf("neither\n");
    }

    return 0;
}