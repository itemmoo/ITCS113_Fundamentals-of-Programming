// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab3-q4-seq-char
*/
#include <stdio.h>
int main(){
    char ch1,ch2;
    scanf("%c\n%c", &ch1, &ch2);
    if(ch1 < ch2){
        for(char i = ch1; i <= ch2  ; i++){
            printf("%c ", i);
        }
    }
    else{
        for(char i = ch1; i <= 'Z'; i++){
            printf("%c ", i);
        }
        for(char i = 'A'; i <= ch2; i++){
            printf("%c ", i);
        }
    }
    

        
    
    return 0;
}