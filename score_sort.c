/*
已知5名学生的4门成绩，请按总分降序排序
*/
#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 4

int sort(int**p,int n ,int m);
int printArr(int **p,int n ,int m);
int main()
{
    int stu_scores[N][M] = 
    {
        {61,12,53,54},
        {35,36,57,78},
        {59,50,50,69},
        {28,77,56,75},
        {64,93,52,81}
    };

    int *pss[N] = 
    {
        stu_scores[0],
        stu_scores[1],
        stu_scores[2],
        stu_scores[3],
        stu_scores[4],
    };

    sort(pss,N,M);

    printArr(pss,N,M);
    
    system("pause");
    return 0;

}

int sort(int**p,int n ,int m)
{
    int sum1 = 0;
    int sum2 = 0;
    int i = 0;
    int **ps = NULL;
    int j = 0;

    for(j = 0 ; j < n - 1 ;j++)
    {
        for(ps = p ; ps < p + n - j - 1 ; ps++) 
        {   
            sum1 = 0;
            sum2 = 0;
            for(i = 0 ; i < m ; i++)
            {
                sum1 += *(*ps+i);
            }
            for(i = 0 ; i < m ; i++)
            {
                sum2 += *(*(ps+1)+i);
            }
            if(sum1 < sum2)
            {
                int *pt = *ps;
                *ps = *(ps+1);
                *(ps+1) = pt;
            }

        }
    }

    return 0;
}

int printArr(int **p,int n ,int m)
{
    int i = 0;
    int j = 0;
    int sum = 0;
    for(i = 0 ; i < n ; i++)
    {   
        sum = 0;
        for(j = 0 ; j < m ; j++)
        {
            printf("%-4d",p[i][j]);
            sum += p[i][j];
        }
        printf("%-4d\n",sum);
    }
    return 0;
}