// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab9-q3-print-rectangle
*/
#include <stdio.h>
void print_c(int row,int col,char letter){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            printf("%c",letter);
        }
        printf("\n");
    }
}
int main(){
    int row,col;
    char letter;
    scanf("%d %d %c",&row,&col,&letter);
    print_c(row,col,letter);
}