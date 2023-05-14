/*
判断 101 到 200 之间的素数。
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPrime(int n,int n_sub);
int main(int argc ,char argv[])
{   
    int n = 101;
    int count = 0;
    while(n<=200)
    {   
        if(isPrime(n,n-1))
        {
            printf("%d ",n);
            count++;
            if(count%5==0) printf("\n");
            
        }
        
        n++;
        
    }
    
    system("pause");
    return 0;
}

int isPrime(int n,int n_sub)
{
    if(n==1||n==2||n_sub==1)
    {
        return 1;
    }
    else if(n%n_sub==0)
    {
        return 0;
    }
    else
    {
        return isPrime(n ,n_sub-1);
    }

}