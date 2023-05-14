/*
判断一个数字是否为质数。
*/

#include <stdio.h>

int isPrime(int n,int n_sub);
int main()
{   
    for(int i = 0 ; i<100;i++)
    {
        if(isPrime(i,i-1))
        {
            printf("%d-",i);
        }
    }

    return 0;
}

int isPrime(int n,int n_sub)
{
    if(n == 1||n==0)
        return 0;
    if (n_sub==1)
        return 1;
    if(n%n_sub==0)
        return 0;
    return isPrime(n,n_sub-1);
}