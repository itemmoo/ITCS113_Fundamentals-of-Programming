/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab9-q9-nested-calls-collatz-level
*/
#include <stdio.h>

// TODO: write the function prototypes here
int next_value(int n);
int collatz_steps(int n);
char level_from_steps(int steps);



int main(void)
{
    int n;
    scanf("%d", &n);

    printf("steps: %d\n", collatz_steps(n));
    printf("level: %c\n", level_from_steps(collatz_steps(n)));

    return 0;
}

// TODO: write the function definitions here
int next_value(int n){
        while(n>1){
        if(n%2==0){
            return n/=2;
        }
        else{
            return n=n*3+1;
        }
    }
}
int collatz_steps(int n){
    int count=0;
    while(n>1){
        if(n%2==0){
            n/=2;
        }
        else{
            n= n*3+1;
        }
        count++;
    }
    return count;
}
char level_from_steps(int steps){
    if(steps<=5){
        return 'S';
    }
    else if(steps<=10){
        return 'M';
    }
    else{
        return 'L';
    }
}
