// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab7-q8-swap-columns
*/
#include <stdio.h>
int main(void) {
    int n,m,c1,c2;
    scanf("%d %d",&n,&m);
    int A[n][m];
    for (int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&A[i][j]);
        }
    }
    scanf("%d %d",&c1,&c2);
    for (int i=0;i<n;i++) {
        int temp = A[i][c1];
        A[i][c1] = A[i][c2];
        A[i][c2] = temp;
    }
    for (int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}