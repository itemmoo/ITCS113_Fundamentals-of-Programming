/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab9-q1-self-defined-function
*/
#include <stdio.h>
float math_func(float a,float b){
    float output = (a*a) - (2*a*b) - 42;
    return output;
}
int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    float output = math_func(a,b);
    printf("%.2f",output);
}