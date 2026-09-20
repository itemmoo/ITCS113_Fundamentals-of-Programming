// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab7-q9-matrix-times-vector
*/
#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d",&n,&m);
    int A[n][m];
    for(int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            scanf("%d",&A[i][j]);
        }
    }
    int v[m];
    for(int j=0;j<m;j++) {
        scanf("%d",&v[j]);
    }
    for(int i=0;i<n;i++) {
        int r_i=0;
        for (int j=0;j<m;j++) {
            r_i+=A[i][j]*v[j];
        }
        printf("%d ",r_i);
    }
    printf("\n");
    return 0;
}