// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab2-q10-simple-atm
*/
#include <stdio.h>
int main(){
    float balance,amount;
    int option;
    
    scanf("%f",&balance);
    scanf("%d",&option);

    switch (option){
        case 1:
            scanf("%f",&amount);
            balance += amount;
            printf("%.2f",balance);
            break;
        case 2:
            scanf("%f",&amount);
            if (amount > balance){
                printf("Insufficient funds");
                break;
            }
            else{
                balance -= amount; 
            }
            printf("%.2f",balance);
            break;
        case 3:
            printf("%.2f",balance);
            break;
        default:
            printf("Invalid option");
    }

    return 0;
}