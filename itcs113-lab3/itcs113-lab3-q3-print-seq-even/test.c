#include <stdio.h>
int main(){
    float distance , fuels;
    scanf("%f %f", &distance , &fuels);
    float efficiency;

    efficiency = distance / fuels;
    if (distance >= 15){
        printf("%.2f fuels is efficient\n", efficiency);
    }

    return 0;

}