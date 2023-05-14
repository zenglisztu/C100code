/*
对10个数进行排序
*/

#include <stdio.h>

void sort(int *arr,int n);
int main()
{
    int numarr[10] = {0};
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d",&numarr[i]);
    }
    sort(numarr,10);
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%d ",numarr[i]);
    }

    return 0;
}

void sort(int *arr,int n)
{
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = 0 ; j < n - i - 1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}