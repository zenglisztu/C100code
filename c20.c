/*
一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double ball_h = 100;
    double sum_h = 0;
    int n = 10;
    while(n)
    {

        sum_h += ball_h*2;
        ball_h /= 2 ;
        
        n--;
    }
    printf("%lf %lf",sum_h-100,ball_h);
    
    return 0;
}