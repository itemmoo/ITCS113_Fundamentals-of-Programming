// YOUR CODE HERE
/**
 USERID: 6988107
 PASSWORD: Vv3sn3b
 EXERCISEID: itcs113-lab1-q5-avg-three
 */

 #include <stdio.h>
 int main(){

    float num1, num2, num3, average;
    scanf("%f\n%f\n%f", &num1, &num2, &num3);
    average = (num1 + num2 + num3) / 3;
    printf("The average is %.2f", average);

    return 0;
 }