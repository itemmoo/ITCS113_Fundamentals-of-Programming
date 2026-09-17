// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab4-q2-tuition-fee
*/
#include <stdio.h>
int main() {
    float t, m;
    int year = 2023;
    scanf("%f %f", &t, &m);
    do{
        t*=1.05; //t = t + (t * 0.05);
        year++;
        printf("Year:%d, Fee: %.2f\n", year, t);
    }while (t <= m);
    printf("In %d, the final fee is %.2f Baht\n", year, t);
    return 0;
}