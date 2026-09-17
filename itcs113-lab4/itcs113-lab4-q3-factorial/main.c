// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab4-q3-factorial
*/
#include <stdio.h>

int main() {
    int n;
    int fact = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%d\n",fact);

    return 0;
}