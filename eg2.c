#include <stdio.h>
#include <stdlib.h>

int main()
{
    int narr[10] = {0};
    int *pi = NULL;
    printf("请输入10个数：");
    for(pi = narr ; pi < (narr+10) ; pi++)
    {
        scanf("%d",pi);
    }
    int min = 0;
    int max = 0;
    for(pi = (narr+1) ; pi < (narr+10) ; pi++)
    {
        if(*pi < narr[min])
        {
            min = pi - narr;
        }
        if(*pi > narr[max])
        {
            max = pi - narr;
        }
    }

    pi = narr;
    printf("最小值是：%d,下标为：%d\n",*(pi+min),min);
    printf("最大值是：%d,下标为：%d\n",*(pi+max),max);
    system("pause");
    return 0;
}

