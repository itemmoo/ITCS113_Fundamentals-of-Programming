// YOUR CODE HERE
/**
 USERID: 6988107
 PASSWORD: Vv3sn3b
 EXERCISEID: itcs113-lab1-q6-mixed-types
 */

 #include <stdio.h>
    int main(){
        float energy_per_hour,efficiency_loss,actual_energy;
        int time;

        scanf("%f\n%d\n%f", &energy_per_hour,&time,&efficiency_loss);
        actual_energy = (energy_per_hour * time) * (1 - efficiency_loss);
        printf("Actual: %.2f\n", actual_energy);
        printf("Integer part: %d\n", (int)actual_energy);
        printf("Remainder: %.2f\n", actual_energy - (int)actual_energy);


        return 0;
    }