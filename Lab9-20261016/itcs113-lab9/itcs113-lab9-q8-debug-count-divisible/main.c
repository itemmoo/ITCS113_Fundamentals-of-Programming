/**
USERID: 6988107
PASSWORD: Vv3sn3b
EXERCISEID: itcs113-lab9-q8-debug-count-divisible
*/
#include <stdio.h>

int count_divisible(int n, int k)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i%k==0)
            count++;
    }
    return count;
}

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("count: %d\n", count_divisible(n,k));
    return 0;
}
