#include <stdio.h>

int main()
{
    int x = 5342;
    int *p = NULL;
    p = &x;
    printf("%d\n",x);
    printf("%x %d",p,*p);

    return 0;
}