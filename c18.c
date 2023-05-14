/*
求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制
*/

#include <stdio.h>
#include <stdlib.h>
int mynum(int n,int m);
int main(int argc , char *argv[])
{
    int n = 0;
    int i = 0;
    int sum = 0;
    scanf("%d %d",&n,&i);
    while(i)
    {
        sum += mynum(n,i);
        i--;
    }
    printf("%d\n",sum);
    system("pause");
    return 0;
}

int mynum(int n,int m)
{
    int sum = 0;
    int i = 1;
    while(m)
    {
        sum += n*i;
        i *= 10;
        m--;
    }
    return sum;

}