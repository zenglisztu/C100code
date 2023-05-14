#include <stdio.h>
#include <stdlib.h>

int swap1(int a, int b);
int swap2(int a, int b);
int mif(int i);
int parr(int n);
int main(int argc , char *argv[])
{
    int a = 2 ;
    int b = 9 ;
    printf("a = %d , b = %d\n",a,b);
    swap1(a,b);
    swap2(a,b);
    mif(1);
    parr(4);
    system("pause");
    return 0;
}

int swap1(int a, int b)
{
    a^=b^=a^=b;
    printf("a = %d , b = %d\n",a,b);
    return 0;
}

int swap2(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d , b = %d\n",a,b);
}

int isOdd(int n)
{
    return n & 1;
}

int mif(int i)
{
    i && printf("true\n");
    return 0;
}

int parr(int n)
{   
    if(n <= 0)
    {
        return -1;
    }
    int arr[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int *p = NULL;
    for(p = arr ; p < arr + 20 - 1 ; p++)
    {
        printf("%-4d",*p);
        (p - arr + 1)%n || printf("\n");
    }
    printf("\n");
    return 0;

}