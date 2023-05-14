/*
字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
*/

#include <stdio.h>
void reverse(char* str);
int main()
{   
    char str[80];
    printf("请输入一个字符串：");
    gets(str);
    reverse(str);
    puts(str);

    return 0;
}

void reverse(char* str)
{
    char *p = str;
    int len = 0;
    while(*p != '\0')
    {
        len++;
        p++;
    }
    p--;
    for(int i = 0 ; i<len/2;i++)
    {
        char c = *(str+i);
        *(str+i) = *(p-i);
        *(p-i) = c;
    }


}