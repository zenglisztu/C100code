
/*
古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
（输出前40个月即可
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fib(int n);
int main(int argc ,char argv[])
{   
    int rabbits = 2;
    int month = 0;
    for (month = 1 ;month <=40 ; month++)
    {
        
        printf("%d %d,",month,fib(month));
        if(month%2==0) printf("\n");
    }

    system("pause");
    return 0;
}

int fib(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }

}