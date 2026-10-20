/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab9-q4-prime-number
*/
#include <stdio.h>

int is_prime(int n);

int main(void)
{
    int num;
    scanf("%d", &num);
    if (is_prime(num))
        printf("%d is a prime number.", num);
    else
        printf("%d is NOT a prime number.", num);
    return 0;
}

int is_prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
// Write the function is_prime here
// Hint: The is_prime function is used to determine
//       whether an input number is a prime number.
//       It returns 1 (i.e., true) when the input is a prime.
//       It returns 0 (i.e., false) when the input is not a prime.