#include <stdio.h>
#include <stdlib.h>

void f(int n);
int main(int argc,char *argv[])
{
    int n = 5;
    printf("请输入5个字符");
    f(n);

    return 0;
}

void f(int n)
{
    if(n==1)
    {
        char c = getchar();
        putchar(c);
    }
    else
    {
        char c = getchar();
        f(n-1);
        putchar(c);
        
    }
}