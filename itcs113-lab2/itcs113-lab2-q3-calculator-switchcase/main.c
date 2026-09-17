// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab2-q3-calculator-switchcase
*/

#include <stdio.h>

int main(){

    float num1, num2;
    char op;
    scanf("%f %f %c", &num1, &num2, &op);

    switch(op){
        case '+':
            printf("%.2f\n", num1 + num2);
            break;
        case '-':
            printf("%.2f\n", num1 - num2);
            break;
        case '*':
            printf("%.2f\n", num1 * num2);
            break;
        case '/':
            printf("%.2f\n", num1 / num2);
            break;
        default:
            printf("Invalid operator\n");
    }
    // if (op == '+'){
    //     printf("%.2f\n", num1 + num2);
    // }
    // else if (op == '-'){
    //     printf("%.2f\n", num1 - num2);
    // }
    // else if (op == '*'){
    //     printf("%.2f\n", num1 * num2);
    // }
    // else if (op == '/'){
    //     printf("%.2f\n", num1 / num2);
    // }
    return 0;
}