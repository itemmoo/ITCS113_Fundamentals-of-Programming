#include <stdio.h>
void number1(){
    int i, start, end, step;
    start = 0;
    end = 10;
    step = 1;
    for (int i = start; i <= end; i += step)
    {
        printf("%d ", i);
    }
    printf("\n");
}
void number2(){
    int i, start, end, step;
    start = -9;
    end = 4;
    step = 2;
    for (i = start; i <= end; i += step)
    {
        printf("%d ", i);
    }
    printf("\n");
}
void number3(){
    int i, start, end, step;
    
    start = -30;
    end = 90;
    step = 5;
    for (i = start; i <= end; i += step)
    {
        printf("%d ", i);
    }
    printf("\n");
}
int main()
{
    number1();
    number2();
    number3();
    return 0;
}
