#include <stdio.h>
#include <stdlib.h>
int test();
int main(int argc ,char *argv[])
{

    int a = 0;
    int j = 0;
    for(j = 0 ; j < 10 ; j++)
    {
        a = test();
        printf("%-4d",a);
    }
    

    system("pause");
    return 0;
}

int test()
{
    static int i = 0;
    i++;
    return i;
}