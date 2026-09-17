// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab2-q5-find-avg
*/

#include <stdio.h>
int main() {
    float num1, num2, num3,num4,num5,num6,num7,num8, w_average,h_average;

    scanf("%f %f %f %f ", &num1, &num2, &num3, &num4);
    scanf("%f %f %f %f", &num5, &num6, &num7, &num8);

    w_average = (num1 + num2 + num3 + num4) / 4;
    h_average = (num5 + num6 + num7 + num8) / 4;

    printf("The average weight is %.2f kg.\n", w_average);
    printf("The average height is %.2f cm.\n", h_average);
}