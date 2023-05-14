#include <stdio.h>

int* minmax(int *arr,int n);
int main()
{
    int numArr[9] = {2,-3,1,6,5,27,9,4,8};
    printf("最小值为：%d,最大值为：%d\n",minmax(numArr,9)[0],minmax(numArr,9)[1]);
}

int* minmax(int *arr,int n)
{   
    int arr_[2] = {arr[0],arr[1]};
    int *p = arr_;
    int i = 0;
    for(i = 0 ; i < n ; i++)
    {
        if(arr[i] < arr_[0])
        {
            arr_[0] = arr[i];
        }
        if(arr[i] > arr_[1])
        {
            arr_[1] = arr[i];
        }
    }

    return p;

}