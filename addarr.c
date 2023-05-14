#include <stdio.h>
#include <stdlib.h>
#define N 5

int addArr(int pi1[], int pi2[],int pi3[],int size);
int main()
{
   
    int arr1[N] = {10,20,30,40,50};
    int arr2[N] = {11,22,33,44,55};
    int arr3[N] = {0};
    int *p = NULL;

    if(!addArr(arr1,arr2,arr3,N))
    {
        for(p = arr3 ; p < arr3 + N ; p++)
        {
            printf("%-4d",*p);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}

int addArr(int pi1[], int pi2[],int pi3[],int size)
{
    int i = 0;
    if(NULL == pi1 || NULL == pi2 || NULL == pi3 || size <= 0)
    {
        return -1;
    }
    for(i = 0 ; i < size ; i++)
    {
        pi3[i] = pi1[i] + pi2[i];
    }

    return 0;
}