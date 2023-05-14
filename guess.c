#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Guess(int num);
int GetNum();
int main()
{
    int num = 0;
    int res = 0;
    do
    {
        num = GetNum();
        res = Guess(num);

    } while (res < 0);
    printf("Congratulation! used %d times\n",res);
    system("pause");
    return 0;
}


int Guess(int num)
{
    static int Mynum = -1;
    static int times = 0;

    times++;
    if(Mynum < 0 )
    {
        srand(time(NULL));
        Mynum = 1 + rand() % 100 ;
    }
    if(num == Mynum)
    {
        return times;
    }
    else if(num > Mynum)
    {
        printf("Too big!\n");
        return -1;
    }
    else
    {
        printf("Too small!\n");
        return -1;
    }
    
}

int GetNum()
{
    int num = 0;
    printf("please guess a number:");
    scanf("%d",&num);
    while(getchar() != '\n')
    {

    }
    return num;
}