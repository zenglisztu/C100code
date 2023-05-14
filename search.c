#include <stdio.h>
#include <stdlib.h>

int Getx();
int isIn(int *arr,int n,int num);
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int num = Getx();
    int i = isIn(arr,6,num);
    if( i >= 0)
    {
        printf("%d 在数组中，下标为：%d\n",num,i);
    }
    else
    {
        printf("%d 不在数组中，返回值为：%d\n",num,i);
    }

    system("pause");
    return 0;
}


int Getx()
{
    int x = 0;
    printf("请输入一个数：");
    scanf("%d",&x);

    while(getchar() != '\n'){}
    return x;
}

int isIn(int *arr,int n,int num)
{
    int i = 0;
    for(i = 0 ; i < n ; i++)
    {
        if(*(arr+i) == num)
        {
            break;
        }      
    }
    if(i >= n)
    {
        return -1;
    }

    return i;
}