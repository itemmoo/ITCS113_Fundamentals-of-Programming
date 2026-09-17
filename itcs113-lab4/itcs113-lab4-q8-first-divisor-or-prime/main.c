// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab4-q8-first-divisor-or-prime
*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 2;i <= n;i++){
        if(i == n){
            printf("PRIME");
        }
        else if(n%i==0){
            printf("%d",i);
            break;
        }
    }
}