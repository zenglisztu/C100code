/*
利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score = 0 ;
    printf("请输入分数：");
    scanf("%d",&score);
    char grade = (score >=90) ? 'A' : ((score >=60) ? 'B' : 'C');
    printf("%c\n",grade);

    system("pause");
    return 0;
}