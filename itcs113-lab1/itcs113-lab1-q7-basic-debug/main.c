// Fix bugs here.
/**
 USERID: 6988107
 PASSWORD: Vv3sn3b
 EXERCISEID: itcs113-lab1-q7-basic-debug
 */

#include <stdio.h>

int main() {
    char gradeCode;
    float score1, score2;
    float average;
    float bonus;
    float final;

    scanf("%c\n", &gradeCode);
    scanf("%f %f", &score1, &score2);

    average = (score1 + score2) / 2;
    bonus = (gradeCode % 10) / 10.0;
    final = average + bonus;

    printf("ASCII: %d\n", gradeCode);
    printf("Bonus: %.2f\n", (bonus));
    printf("Final: %.2f\n", final);

    return 0;
}