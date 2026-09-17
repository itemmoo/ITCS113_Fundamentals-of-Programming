// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab3-q5-guess-game
*/
#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    int wins = 0;

    while (scanf("%d %d %d %d", &n1, &n2, &n3, &n4) == 4) {
        int sum = n1 + n2 + n3 + n4;

        if (sum == 42) {
            printf("You win!\n");
            wins++;
        } 
        else {
            printf("You lose!\n");
        }
    }

    printf("Number of wins: %d\n", wins);

    return 0;
}