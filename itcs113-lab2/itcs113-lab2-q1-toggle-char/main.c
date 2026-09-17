// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab2-q1-toggle-char
*/

#include <stdio.h>
int main() {
    char ch;

    if (scanf("%c", &ch) == 1) {
        if (ch>='a' &&ch <= 'z') {
            ch = ch - ('a'- 'A');
        } else if (ch>='A' &&ch <='Z') {
            ch = ch + ('a' - 'A');
        }     
        printf("%c\n", ch);
    }
    return 0;
}