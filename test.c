#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc , char *argv[])
{   
    printf("argc = %d\n",argc);
    int i = 0;
    for (i = 0;i < argc ;i++)
    {
        printf("argv[%d] = %s\n",i,argv[i]);
    }

    system("pause");
    return 0 ;
}