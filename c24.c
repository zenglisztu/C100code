/*
有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    double numerator = 2;
    double denominator = 1;
    double sum = 0;
    int n = 20;
    double temp = 0;
    while(n)
    {   
        sum += numerator/denominator;
        temp = numerator;
        numerator += denominator;
        denominator = temp;
        n--;
    }
    printf("%9.6f\n",sum);

    system("pause");
    return 0;
}

