/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab6-q3-1d-array-find-min-max
*/
// YOUR CODE HERE
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[1];
    for(int i=2;i<n;i+=2){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=3;i<n;i+=2){
        if(arr[i]<min){
            min =arr[i];
        }
    }
    printf("%d %d",min,max);


    return 0;
}