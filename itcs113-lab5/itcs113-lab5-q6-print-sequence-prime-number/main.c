// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab5-q6-print-sequence-prime-number
*/
#include <stdio.h>
int main(){
    int n;
    do {
        scanf("%d", &n);
    } while (n < 2 || n > 1000);
    
        for (int i = 2; i <= n; i++) {
            int count = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    count++;
                }
            }
            if (count == 2) {
                printf("%d ", i);
            }
        }


    return 0;
}