#include <stdio.h>
#include <stdlib.h>

int printS(int n);
int main(int argc , char *argv[])
{
    // int n = 0;
    // scanf("%d",&n);
    printS(5);
    printS(3);
    printS(4);


    system("pause");
    return 0;
}

int printS(int n)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int black = n - 1;
    for(i = 1 ; i <= n ; i ++)
    {   
        for(k = 0 ; k <black; k++)
        {
            printf(" ");
        }
        black--;
        for(j = 1 ; j <= i ; j++)
        {   

            printf("%d ",i);
        }
        printf("\n");
    }
}