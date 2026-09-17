// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab2-q8-shipping-fee
*/

#include <stdio.h>
int main() {
    char mode,region,zone;
    float weight, fee,Subtotal;

    scanf("%c\n",&mode);

    switch (mode)
    {
    case 'D':
        scanf("%f %c \n",&weight,&zone);
        switch (zone){
            case '1':
                fee = 20.0+weight * 5.0;
                break;
            case '2':
                fee = 20.0+ weight * 8.0;
                break;
            case '3':
                fee = 20.0+ weight * 10.0;
                break;
            default:
                printf("Invalid zone");
                break;
        }
        if (fee < 30.0) {
            fee = 30.0;
        }
        printf("%.2f\n", fee);
        break;
        
        break;
    case 'I':
        scanf("%f %c \n",&weight,&region);
        switch (region){
            case 'A':
                Subtotal = 50.0 + weight * 15.0;
                break;
            case 'E':
                Subtotal = 50.0 + weight * 20.0;
                break;
            case 'O':
                Subtotal = 50.0 + weight * 25.0;
                break;
            default:
                printf("Invalid region");               
        }
        printf("%.2f\n", Subtotal * 1.10);
        break;
    default:
        break;
    }
    return 0;
}