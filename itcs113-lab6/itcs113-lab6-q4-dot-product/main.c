/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab6-q4-dot-product
*/
// YOUR CODE HERE
#include <stdio.h>
int main(){
    int n,sum=0;
    do{
        scanf("%d",&n);
    }while(n<=0);
    int arr1[n],arr2[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    for(int i=0;i<n;i++){
        sum+=arr1[i]*arr2[i];
    }
    printf("%d",sum);
    return 0;
}