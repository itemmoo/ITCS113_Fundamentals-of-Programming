// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab3-q3-print-seq-even
*/

#include <stdio.h>
int main(){
    int n;

    scanf("%d",&n);
    if(n>=2){  
        for(int i=2;i<=n;i++){
            if(i%2==0){
                printf("%d ",i);
            }
        }
        printf("\n");
        for(int i = n;i>=2;i--){
            if(i%2==0){
                printf("%d ",i);
            }
        }
    }
    else {
        printf("Unable to print the sequence\n");  
    }
    return 0;
}