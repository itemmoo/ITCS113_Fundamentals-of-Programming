// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab4-q10-do-while-advanced-validation
*/
#include <stdio.h>
int main(){
    int x, sum, count = 0,isValid = 0;
    do{
        scanf("%d", &x);
        count++;
        if ((x >= 10 && x <= 999) && (x % 7 == 0 || x % 10 == 3) && (x % 10 != 0)) {
            isValid = 1;
        }
        if(x >= 10 && x <= 999){
            if(x % 7 == 0|| x % 10 == 3){
                if(x%10 != 0){
                    if(x>=10&&x<100){
                        sum = (x%10) + (x/10%10);
                    }
                    else if(x>=100&&x<1000){
                        sum = (x%10) + (x/10%10) + (x/100%10);
                    }
                }
            }
        }
    }while(!isValid);
    printf("%d %d %d",x, count, sum);
}