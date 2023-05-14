#include <stdio.h>
#include <stdlib.h>

double fact(int n);
int main(int argc,char *argv[])
{
    double sum = 0;
    int i = 0;
    for(i = 1 ; i <= 20 ; i++)
    {
        sum += fact(i);
        printf("%d! = %lf\n",i,fact(i));
    }
    printf("%lf\n",sum);
    system("pause");
    return 0;
}

double fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}
