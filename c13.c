/*
将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    int num = 0;
    int i = 0;
    printf("请输入一个正整数：");
    scanf("%d",&num);
    printf("%d = ",num);
    while(num!=1)
    {
        for(i =2 ; i <=num ; i++)
        {
            if(num%i==0)
            {
                num /= i;
                printf("%d",i);
                if(num!=1)
                {
                    printf("*");
                }
                
                break;
            }    
        }
    }
    printf("\n");
    system("pause");
    return 0;
}