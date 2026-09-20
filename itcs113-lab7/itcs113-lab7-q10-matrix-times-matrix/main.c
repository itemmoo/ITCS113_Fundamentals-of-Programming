// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab7-q10-matrix-times-matrix
*/
#include <stdio.h>

int main(void) {
    int n,m,p;
    scanf("%d %d %d",&n,&m,&p);
    int A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            scanf("%d",&A[i][j]);
        }
    }
    int B[m][p];
    for(int i=0;i<m;i++) {
        for(int j=0;j<p;j++) {
            scanf("%d",&B[i][j]);
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<p;j++) {
            int sum = 0;
            for (int k=0;k<m;k++) {
                sum += A[i][k]*B[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}