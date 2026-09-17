// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab2-q7-triangle-type
*/
#include <stdio.h>
int main(){

    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    if (a <= 0 || b <= 0 ||c<= 0|| a+b <=c ||a+c <=b || b+c <=a){
        printf("invalid");
    }
    else if(a == b && b == c && a==c){
        printf("equilateral");
    }
    else if(a == b||b == c ||a==c){
        printf("isosceles");
    }
    else{
        printf("scalene");
    }

    return 0;
}
