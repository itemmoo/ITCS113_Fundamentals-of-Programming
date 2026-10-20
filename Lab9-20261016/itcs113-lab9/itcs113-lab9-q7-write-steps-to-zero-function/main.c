/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab9-q7-write-steps-to-zero-function
*/
#include <stdio.h>

// TODO: write the function prototype here
int steps_to_zero(int n);

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("steps: %d", steps_to_zero(n));
    return 0;
}

// TODO: write the function definition here
int steps_to_zero(int n){
    int count=0;

    while(n>0){
        if(n%2==0){
            n/=2;
        }
        else{
            n-=1;
        }

        count++;
    }
    return count;
}
