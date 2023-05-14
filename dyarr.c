#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int GetInput();
int SelectSort(int *arr , int size);
int main()
{   
    int num = 0;
    num = GetInput();

    int *pint = NULL;
    pint = (int*)malloc(num * sizeof(int));
    if(NULL == pint)
    {
        return -1;
    }
    memset(pint,0,num*sizeof(int));

    srand(time(NULL));

    int i = 0;
    for(i = 0 ; i < num ; i++)
    {
        pint[i] = rand() % 1000;
    }

    SelectSort(pint,num);

    for(i = 0 ; i < num ; i++)
    {
        printf("%-4d",pint[i]);
        if((i+1) % 5 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
    free(pint);
    pint = NULL;
    system("pause");
    return 0;
}

int SelectSort(int *arr , int size)
{   
    int i = 0;
    int j = 0;
    int min = 0;
    int temp = 0;
    if(NULL == arr || size <= 0)
    {
        return -1;
    }

    for(i = 0 ; i < size ; i++)
    {   
        min = i;
        for( j = 1 + i ; j < size ; j++)
        {
            if(*(arr+j) < *(arr+min))
            {
                min = j;
            }
        }
        if(j != i);
        {   
            temp = arr[i];
            arr[i] = *(arr+min);
            *(arr+min) = temp;
        }
    }

}

int GetInput()
{
    int num = 0;
    printf("please enter a number:");
    scanf("%d",&num);

    while(getchar() != '\n'){}

    return num;

}