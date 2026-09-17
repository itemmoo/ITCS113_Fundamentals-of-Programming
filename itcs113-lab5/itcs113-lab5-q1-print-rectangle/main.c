// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab5-q1-print-rectangle
*/
#include <stdio.h>
int main() {
    int width, height;
    char ch;
scanf("%d %d %c", &width, &height,&ch);

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}