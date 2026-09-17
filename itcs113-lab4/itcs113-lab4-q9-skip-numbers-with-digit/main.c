// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab4-q9-skip-numbers-with-digit
*/
#include <stdio.h>
int main(){
    int n,d,count=0;
    scanf("%d %d",&n,&d);

    for (int i = 1;i <= n;i++) {
        int temp = i;
        while (temp >0 &&temp%10!= d) {
            temp/=10;
        }
        if(temp>0) {
            continue;
        }
        if(count>0) {
            printf(" ");
        }
        printf("%d",i);
        count++;
    }

    if (count == 0){
        printf("NONE");
    }
    return 0;
}