/*
删除一个字符串中的指定字母，如：字符串 "aca"，删除其中的 a 字母
*/

#include <stdio.h>
void delchar(char *chArr , char ch);
int main()
{
    char str[80] = {0};
    gets(str);
    char ch = getchar();
    delchar(str,ch);
    puts(str);
    return 0;
}

void delchar(char *chArr , char ch)
{
    char *line = chArr;
    while(*chArr != '\0')
    {
        if(*chArr!=ch)
        {
            *line++ = *chArr;
        }
        chArr++;
    }
    *line = '\0';
 
}