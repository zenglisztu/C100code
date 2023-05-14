#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char names[][10] = 
    {
        "拜登",
        "特朗普",
        "普京"
    } ;
   
    int n = 0 ;
    while(n < sizeof(names)/sizeof(names[0]))
    {
        printf(names[n]);
        printf("\n");
        n++;
    }    

    system("pause");
    return 0;
}