/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab9-q6-refactor-shipping-cost
*/
#include <stdio.h>

// TODO: write the function prototypes here
int base_cost(int weight, int distance);
int surcharge(int weight);
int final_cost(int weight, int distance);


int main(void)
{
    int weight, distance;
    scanf("%d %d", &weight, &distance);
    printf("base: %d\n", base_cost(weight, distance));
    printf("surcharge: %d\n", surcharge(weight));
    printf("total: %d\n", final_cost(weight, distance));
    // TODO: call the functions and print the answers

    return 0;
}

// TODO: write the function definitions here
int base_cost(int weight, int distance){
    return weight*10+distance*2;

}
int surcharge(int weight){
    int Surcharge;
    if(weight>20){
        return 50;
    }
    return 0;

}
int final_cost(int weight, int distance){
    return base_cost(weight,distance)+surcharge(weight);
}

