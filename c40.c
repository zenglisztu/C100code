#include <stdio.h>
#include <stdlib.h>

int printRarr(int *arr,int size);
int main()
{
    int arrn[11] = {0,1,2,3,4,5,6,7,8,9,10};
    printRarr(arrn,11);
    system("pause");
    return 0;
}


int printRarr(int *arr,int size)
{
    if(NULL == arr || size <= 0)
    {
        return -1;
    }
    int *star = NULL;
    int *end = NULL;
    for(star = arr,end =arr + size - 1 ;star < arr + size/2 ; star++,end--)
    {
        int temp = *star;
        *star = *end;
        *end = temp;
    }
    
    for(star = arr; star < arr + size ;star++ )
    {
        printf("%-4d",*star);
    }
    printf("\n");
    return 0;
}