// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab7-q5-replace-row-in-matrix
*/
#include <stdio.h>
int main(void){
    int n,m,row;
    scanf("%d %d",&n,&m);
    int A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    scanf("%d",&row);
        for(int j=0;j<m;j++){
            scanf("%d",&A[row][j]);
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }    
    return 0;
}