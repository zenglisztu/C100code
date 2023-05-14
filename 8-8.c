// #include <stdio.h>

// void zipStr(char *p);
// int main()
// {
//     char line[80];
//     printf("请输入一个字符串：");
//     gets(line);
//     zipStr(line);
//     puts(line);
//     return 0;
// }

// void zipStr(char *p)
// {   
//     char *q = p;
//     int n = 0;
//     while(*p !='\0')
//     {   
//         n = 1;
//         while(*p ==*(p+n))
//         {
//             n++;
//         }
//         if(n>=10)
//         {
//             *q++ = n/10 + '0';
//             *q++ = n%10 + '0';
//         }
//         else if(n>=2)
//         {
//             *q++ = n + '0';
//         }
//         *q++ = *(p+n-1);
//         p = p + n;

//     }
//     *q = '\0';

// }


#include <stdio.h>
void zipStr(char *p);
int main()
{   
    char line[80] = {0};
    gets(line);
    zipStr(line);
    puts(line);
    return 0;
}


void zipStr(char *p)
{
    char *q = p;
    int n = 0;
    while(*p !='\0')
    {
        n = 1;
        while(*p == *(p+n))
        {
            n++;
        }
        if(n>=10)
        {
            *q++ = n/10 + '0';
            *q++ = n%10 + '0';
        }
        else if(n>=2)
        {
            *q++ = n + '0';
        }
        *q++ = *(p+n-1);
        p += n;
    }
    *q = '\0';

}