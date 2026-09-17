/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab6-q7-array-multiplication-table
*/
#include <stdio.h>

int main(void) {
    // YOUR CODE HERE
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i]*arr[j]);
            if(j<n-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
