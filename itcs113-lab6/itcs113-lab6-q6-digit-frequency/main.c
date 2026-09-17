/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab6-q6-digit-frequency
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count[10]; 
    for(int i = 0;i<n;i++) {
        int digit;
        scanf("%d",&digit);
        count[digit]++;
    }
    for(int i = 0;i<10;i++) {
        printf("%d",count[i]);
        if(i<9){
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}