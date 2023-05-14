/*
打印出所有的"水仙花数"，
所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int n = 100;
    while(n<10000)
    {
        int b = n/100%10;
        int s = n/10%10;
        int g = n%10;
        if(b*b*b+s*s*s+g*g*g==n)
        {
            printf("%d\n",n);
        }
        n++;
    }


    system("pause");
    return 0;
}