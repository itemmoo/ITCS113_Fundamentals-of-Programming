// YOUR CODE HERE
/**
USERID: 6988089
PASSWORD: q4ZmPHdN
EXERCISEID: itcs113-lab4-q0-1-do-while-countdown
*/
#include <stdio.h>

int main(void) {
    int n;
    
    if (scanf("%d", &n) == 1) {
        do {
            printf("%d\n", n);
            n--;
        } while (n >= 0);
    }
    
    return 0;
}