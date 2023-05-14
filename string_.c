#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double fact(int n);

int main()
{

    int n = 0;
    double sum = 0;
    scanf("%d",&n);
    if(n <=0)
    {
        return 0;
    }
    int i = 0;
    for(i = 1 ; i <= n ; i++ )
    {
        sum += fact(i);
    }
    printf("ÄãºÃ1!+2!+...+%d! = %.0lf\n",n,sum);

    system("pause");
    return 0;
}

double fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}