// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab7-q7-delete-column
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
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==k){
                continue;
            }
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}