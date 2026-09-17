// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab2-q6-bmi-category
*/
#include <stdio.h>
int main(){
    float weight, height, bmi;
    scanf("%f %f", &weight, &height);
    bmi = weight / (height * height);
    if (bmi < 18.5){
        printf("bmi=%.2f\n", bmi);
        printf("Underweight");
    }
    else if (bmi >= 18.5 && bmi < 25){
        printf("bmi=%.2f\n", bmi);
        printf("Normal");
    }
    else if (bmi >= 25 && bmi < 30){
        printf("bmi=%.2f\n", bmi);
        printf("Overweight");
    }
    else{
        printf("bmi=%.2f\n", bmi);
        printf("Obese");
    }

    return 0;
}