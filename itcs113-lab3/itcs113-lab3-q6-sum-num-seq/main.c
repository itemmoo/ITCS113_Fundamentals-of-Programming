// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab3-q6-sum-num-seq
*/
#include <stdio.h>
int main() {
    int num1,num2, sum = 0;

    scanf("%d %d", &num1, &num2);
    for (int i = num1; i <= num2; i++) {
        sum += i;
    }       
    
    printf("%d\n", sum);

    return 0;
}