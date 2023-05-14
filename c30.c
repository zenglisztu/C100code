#include <stdio.h>

int isWan(int n);
int main()
{
    int num = 0;

    printf("请输入一个五位数的正整数：");
    scanf("%d",&num);
    if(isWan(num))
    {
        printf("%d 是完数\n",num);

    }
    else
    {
        printf("%d 不是完数",num);
    }

    return 0;
}

int isWan(int n)
{
    if(n%10 == n/10000 && n/10%10 == n/1000%10)

        return 1;

    return 0;

}