/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab6-q8-weighted-average
*/
#include <stdio.h>

int main(void) {
    // YOUR CODE HERE
    int n;
    float AllSum=0,sum_weight=0;
    scanf("%d",&n);
    int score[n],weight[n];
    for(int i=0;i<n;i++){
        scanf("%d",&score[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&weight[i]);
        sum_weight+=weight[i];
        AllSum+=(float)weight[i]*score[i];
    }
    float avg = AllSum/sum_weight;
    printf("%.2f",avg);
    return 0;
}
