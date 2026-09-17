/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab6-q9-combined-array-report
*/
#include <stdio.h>

int main(void) {
    // YOUR CODE HERE
    int r,c;
    scanf("%d %d",&r,&c);
    int R[r],C[c];
    for(int i=0;i<r;i++){
        scanf("%d",&R[i]);
    }
    for(int i=0;i<c;i++){
        scanf("%d",&C[i]);
    }
    int max=R[0]+C[0];
    int min=R[0]+C[0];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            int val=R[i]+C[j];
            if(val<min)min=val;
            if(val>max)max=val;
            
            printf("%d",val);
            if (j<c-1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("min = %d\n",min);
    printf("max = %d\n",max);
    
    return 0;
}
