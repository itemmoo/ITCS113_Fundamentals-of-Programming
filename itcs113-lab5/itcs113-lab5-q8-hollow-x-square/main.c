/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab5-q8-hollow-x-square
*/
#include <stdio.h>

int main(void) {
    // TODO: Write your code here.
    int n;
    do{
        scanf("%d",&n);
    }while(n%2==0&&n<3||n>99);

    for(int i =1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j||i+j==n+1||i==1 || i ==n||j==1||j==n){
                printf("*");
            }
            else{
            printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
