// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab5-q5-print-pyramid-pattern
*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("1 ");
        }
        for(int j=n;j>i;j--){
            printf("0 ");
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("1 ");
        }
        for(int j=n;j>i;j--){
            printf("0 ");
        }
        printf("\n");
    }
    return 0;
}