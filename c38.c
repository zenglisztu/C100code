#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3] = {10,2,3,4,50,6,7,8,90};
    int sum = 0;
    for(int i = 0 ; i < 3 ; i++)
    {
        sum += mat[i][i];
    } 
    printf("对角线之和为：%d\n",sum);
    system("pause");
    return 0;
}