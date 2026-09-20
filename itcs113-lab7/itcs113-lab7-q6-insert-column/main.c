// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab7-q6-insert-column
*/
#include <stdio.h>
int main(void){
    int n,m,k;
    scanf("%d %d",&n,&m);
    int A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    scanf("%d",&k);
    int col[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &col[i]);
    }
    //not done
    for(int i=0;i<n;i++) {
        for(int j=0;j<k;j++) {
            printf("%d ",A[i][j]);
        }
        printf("%d ",col[i]);
        for(int j=k;j<m;j++) {
            printf("%d ",A[i][j]);
        }  
        printf("\n");
    }
    return 0;
}