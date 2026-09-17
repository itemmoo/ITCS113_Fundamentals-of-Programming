// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab4-q7-mode-select-different-loops
*/
#include <stdio.h>
int main(){
    char mode;
    int n;
    scanf("%c %d",&mode,&n);
    switch(mode){
        case 'W':
        case 'w':{
            int i=0;
            while(i < n){
                i++;
                printf("%d ",i);
            }
            break;
        }
        case 'F':
        case 'f':{
            for(int i = n; i >= 1;i--){
                printf("%d ",i);
            }
            break;
        }
        case 'D':
        case 'd':{
            int i = 0;
            do{
                i++;
                if(i%2==1){
                    printf("%d ",i);
                }
            }while(i <= n);
            break;
        }
        default:
            return 0;
    }
}