// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab9-q2-print-sequence-characters
*/
#include <stdio.h>
void print_c(int n,char letter){
    for(int i=1;i<=n;i++){
        printf("%c",letter);
    }
}
int main(){
    int n;
    char letter;
    scanf("%d %c",&n,&letter);
    print_c(n,letter);
}