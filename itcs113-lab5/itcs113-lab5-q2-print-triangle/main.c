// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab5-q2-print-triangle
*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    for (int i  =1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if((i+j)%2==0){
                printf("1 ");
            }
            else{
            printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}