#include <stdio.h>

int pv(int n,int nl);
int main()
{   
    int n = 0;
    int num = 0;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d",&num);
        pv(num,num);
        n--;
    }
    return 0;
}

int pv(int n,int nl)
{
    if(n == 1)
    {   
        int b = nl - n;
        while(b)
        {   
            printf(" ");
            b--;
        }
        printf("V\n");
        return 0;
    }
    else if( n == 2)
    {
        int b = nl - n;
        while(b)
        {   
            printf(" ");
            b--;
        }
        printf("V V\n");
        pv(n-1,nl);
    }
    else
    {
        int s = 2*n - 1;
        int i = 0;
        int b = nl - n;
        while(b)
        {   
            printf(" ");
            b--;
        }
        for(i = 0 ; i < s ; i++)
        {
            if(i == 0 || i == s - 1)
            {
                printf("V");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        return pv(n-1,nl);
    }


}