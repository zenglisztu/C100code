/*
输入两个正整数m和n，求其最大公约数和最小公倍数。
*/

#include <stdio.h>
#include <stdlib.h>

int Gcd(int n , int m);
int main(int argc, char *argv[])
{
    int n = 0;
    int m = 0;
    printf("请输入两个整数：");
    scanf("%d %d",&n,&m);
    int gcd = Gcd(n,m);
    printf("%d %d 的最大公约数为：%d\n",n,m,gcd);
    printf("最大公倍数为：%d\n",n*m/gcd);
    return 0;
}

//辗转相除法
int Gcd(int n , int m)
{
    if(n<m)
        n ^= m ^= n ^= m;
    if(n%m==0)
        return m;
    return Gcd(m,n%m);
}

