// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab2-q9-electricity-bill
*/
#include <stdio.h>
int main(){
    float units;
    scanf("%f",&units);
    if(units >= 0 && units <= 50){
        printf("%.2f",units*2.0+30);
    }
    else if(units >50 && units <= 100){
        printf("%.2f",(50*2.0)+(units-50)*3.0+30);
    }
    else if(units >100 && units <= 200){
        printf("%.2f",(50*2.0)+(50*3.0)+(units-100)*4.0+30);
    }
    else if(units > 200){
        printf("%.2f",(50*2.0)+(50*3.0)+(100*4.0)+(units-200)*5.0+30);
    }
    else{
        printf("invalid");
    }
    return 0;
}