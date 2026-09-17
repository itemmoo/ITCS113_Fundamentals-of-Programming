// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab3-q7-print-notdiv
*/

#include <stdio.h>
int main(){
    int num1,num2;

    scanf("%d %d", &num1, &num2);

    for(int i = num1; i <= num2; i++){
        if(num1++ == num2){
            printf("%d", i);
        }
        else if(i % 3 != 0){
            printf("%d,", i);
        }
    }
    return 0;
}