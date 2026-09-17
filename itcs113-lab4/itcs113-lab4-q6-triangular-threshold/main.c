// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab4-q6-triangular-threshold
*/
#include <stdio.h>
int main(){
    int n,sum=0,k=0;
    scanf("%d",&n);
        while(sum<n){
            k++;
            sum+=k;
        }
    printf("%d %d",k,sum);
    return 0;
}