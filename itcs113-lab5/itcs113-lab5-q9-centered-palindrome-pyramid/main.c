/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab5-q9-centered-palindrome-pyramid
*/
#include <stdio.h>

int main(void) {
    // TODO: Write your code here.
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        for(int j=2;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
