// YOUR CODE HERE
/**
 USERID: 6988107
 PASSWORD: Vv3sn3b
 EXERCISEID: itcs113-lab1-q4-ev-charge
 */

 #include <stdio.h>
 int main() {
     float battery_capacity,charging_rate,charging_time,cost;
     scanf("%f\n", &battery_capacity);
     scanf("%f\n", &charging_rate);

    charging_time = battery_capacity / charging_rate;
    cost = battery_capacity * 4.5;
    printf("%.2f\n", charging_time);
    printf("%.2f\n", cost);




     return 0;
 }