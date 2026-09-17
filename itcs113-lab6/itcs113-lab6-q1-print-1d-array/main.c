/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab6-q1-print-1d-array
*/
// YOUR CODE HERE
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i =0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i =0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    for(int i=n-1;i>=0;i--){
        printf("%d ",num[i]);
    }
    

}