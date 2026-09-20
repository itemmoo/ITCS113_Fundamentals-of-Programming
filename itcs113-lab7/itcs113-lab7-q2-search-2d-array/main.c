// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab7-q2-search-2d-array
*/
#include <stdio.h>
int main(){
    int n,m,num;
    scanf("%d %d",&n,&m);
    int A[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    scanf("%d",&num);
    int found = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (A[i][j] == num) {
                if (found > 0) {
                    printf(" ");
                }
                printf("[%d,%d]", i, j);
                found++;
            }
        }
    }    

    if (found == 0) {
        printf("Not found");
    }
    return 0;
}