/*
数组插入
*/

#include <stdio.h>
#include <stdlib.h>

void printNarr(int *arr,int len);
void insert(int *arr , int len, int n);
int main()
{
    int narr[11] ={1,3,5,7,9,10,15,17,20,30};
    int num = 0;
    
    printf("原数组为：\n");
    printNarr(narr,11);

    printf("\n请输入需要插入的数字:");
    scanf("%d",&num);

    insert(narr,11,num);

    printf("插入后数组为：\n");
    printNarr(narr,11);
    
    system("pause");
    return 0;
}

void printNarr(int *arr,int len)
{
    int *p = NULL;
    for(p = arr;p < arr + 11 ; p++)
    {
        printf("%-4d",*p);
    }
    printf("\n");
}

void insert(int *arr , int len, int n)
{   
    int *p = NULL;
    if(n > arr[len-2])
    {
        arr[len-1] = n;
    }
    else
    {
        for(p = arr ; p < arr + len - 1 ; p++)
        {
            if(n > *p)
            {
                continue;
            }
            else
            {
                for(int j = len - 1 ; j > p - arr ; j-- )
                {
                    arr[j] = arr[j-1];
                }
                *p = n;
                break;
            }
        }
    }
}