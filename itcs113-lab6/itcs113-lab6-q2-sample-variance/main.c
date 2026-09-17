/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab6-q2-sample-variance
*/
// YOUR CODE HERE
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    float arr[n],sum =0.0,sq_diff_sum = 0.0;
    
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    float mean = sum / n;
    

    for (int i = 0; i < n; i++) {
        float diff = arr[i] - mean;
        sq_diff_sum += diff * diff;
    }

    float variance = sq_diff_sum / (n - 1);
    printf("%.2f\n", variance);

    return 0;
}