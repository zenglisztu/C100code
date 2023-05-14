#include <stdio.h>

void printNum(int n);
int count = 0;
int main()
{
    int num = 0;
    printf("请输入一个数：");
    scanf("%d",&num);
    printNum(num);
    printf("\n%d\n",count);
    return 0;
}

void printNum(int n)
{
    if(n < 10)
    {
        printf("%d ",n);
        count++;
    }

    else
    {
        printf("%d ",n%10);
        count++;
        printNum(n/10);
        
    }
    

}