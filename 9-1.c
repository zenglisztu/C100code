#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20

struct STU
{
    int id;
    char name[N];
    int computer;
    int english;
    int math;
    double average;
};

int main(int argc , char *argv[])
{   
    int n = 0;
    int i = 0;
    struct STU stu = {0};
    struct STU max = {0};

    printf("please input n:");
    scanf("%d",&n);
    struct STU * pst = NULL;
    for(i = 0 ; i < n ; i++)
    {   
        pst = &stu;
        printf("NO.%d:",i+1);
        scanf("%d%s%d%d%d",&stu.id ,stu.name,&stu.computer,&stu.english,&stu.math);
        stu.average = (pst->computer + pst->english + pst->math) / 3.0;
        if(i == 0)
        {
            max = stu;
        }
        else
        {
            if(stu.average > max.average)
            {
                max = stu;
            }
        }
    }
    printf("id:%d,name:%s,average:%.2lf\n",max.id,max.name,max.average);

    system("pause");

    return 0;
}

