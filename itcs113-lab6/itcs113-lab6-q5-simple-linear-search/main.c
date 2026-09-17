// YOUR CODE HERE
/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab6-q5-simple-linear-search
*/
#include <stdio.h>
int main(){
    int n,value;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&value);
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            printf("%d",i);
            return 0;
        }
    }
    printf("Not found");
    return 0;
        

}