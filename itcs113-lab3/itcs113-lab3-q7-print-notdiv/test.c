#include <stdio.h>
int main(){
    int a , b;
    scanf("%d %d", &a , &b);
    
    int e =1;
    for (int i = a; i <= b ; i++){
        if(i%3 != 0){
            if(!e){
                printf(",");
            }
            printf("%d", i );

            e = 0;
        } 
    }
    return 0;
    }