/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab5-q7-prime-marker-table
*/
#include <stdio.h>

int main(void) {
    // TODO: Write your code here.
    int n;
    do {
        scanf("%d", &n);
    } while (n < 1 || n > 20);

    for(int i =1;i<=n*n;i++){
        int count =0;
        for(int j=1;j<=i;j++ ){
            if(i%j==0){
                count++;
            }
        }
        if(i % n ==0){
            printf("%d",i);
            printf("\n");
        }
        else if(count==2){
            printf("P ");
        }
        else {
            printf("%d ",i);
        }
    }
    

    return 0;
}
