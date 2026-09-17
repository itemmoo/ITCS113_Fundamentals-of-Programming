// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab3-q2-cnt-sum-odd
*/
#include <stdio.h>
int main(){
    char ch;
    int oddCount=0,oddSum=0;
    while(ch!='q'){
        scanf("%c",&ch);
        if(ch%2==1 && ch!='q'){
            oddCount++;
            oddSum+=(ch-'0');
        }
    }
    printf("%d:%d",oddCount,oddSum);
    return 0;
}