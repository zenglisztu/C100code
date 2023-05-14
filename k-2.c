#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20

int main(int argc , char *argv[])
{
    char str[N] = "";
    int count = 0;
    gets(str);
    char *pc = NULL;
    int len = strlen(str);
    pc = str;

    while(*pc == 'A')
    {
        count++;
        pc++;
    }

    if(count == 8)
    {
        putchar('A');
    }
    else
    {
        for(pc = str ; *pc != '\0' ; pc ++)
        {   
            if(*pc =='A'&&pc-str==0)
            {
                printf("-");
                continue;
            }
            printf("%c",*pc);
            if(pc - str != len-1)
            {
                printf("-");
            }
        }
    }
    printf("\n");
    system("pause");
    return 0;
}

double fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n*fact(n-1);
}