// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab7-q1-sum-two-matrces
*/
#include <stdio.h>
int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    int first[n][m],second[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&first[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&second[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=first[i][j]+second[i][j];
            printf("%d ",sum);
            sum=0;     
        }   
        printf("\n");
    }

    return 0;
}