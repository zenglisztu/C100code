//
// #include <stdio.h>

// int main()
// {

//     printf("**************************\n");
//     printf("Hello World!\n");
//     printf("**************************\n");
//     return 0;
// }

//题目 1002: [编程入门]三个数最大值

// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%d%d%d",&a,&b,&c);
//     if(b>a)
//     {
//         a = b;
//     }
//     if(c > a)
//     {
//         a = c;
//     }
//     printf("%d",a);
//     return 0;
// }
/*
要将"China"译成密码，译码规律是：用原来字母后面的第4个字母代替原来的字母．
例如，字母"A"后面第4个字母是"E"．"E"代替"A"。因此，"China"应译为"Glmre"。
请编一程序，用赋初值的方法使cl、c2、c3、c4、c5五个变量的值分别为，
’C’、’h’、’i’、’n’、’a’，经过运算，使c1、c2、c3、c4、c5分别变为’G’、’l’、’m’、’r’、’e’，并输出。
*/
// #include <stdio.h>

// int main()
// {
//     char c1 = getchar();
//     char c2 = getchar();
//     char c3 = getchar();
//     char c4 = getchar();
//     char c5 = getchar();
//     printf("%c%c%c%c%c",(int) c1 + 4,(int) c2 + 4,(int) c3 + 4,(int) c4 + 4,(int) c5 + 4);


//     return 0;
// }


/*
有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，
每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
*/
// #include <stdio.h>
// int cows(int n);
// int main()
// {

//     int n = 0;
//     scanf("%d",&n);
//     while(n)
//     {   
//         printf("%d\n",cows(n));
//         scanf("%d",&n);
//     }

//     return 0;
// }

// int cows(int n)
// {
//     if(n <= 3)
//     {
//         return n;
//     }

//     return cows(n-1) + cows(n-3);
// }


/*
输入一个华氏温度，要求输出摄氏温度。公式为 c=5(F-32)/9，取位2小数。
*/

// #include <stdio.h>

// int main()
// {
//     int f = 0;
//     scanf("%d",&f);
//     printf("c=%.2lf",5*(f-32)/9.0);
//     return 0;
// }


/*
有一个函数
y={  x      x<1
    |  2x-1   1<=x<10
    { 3x-11  x>=10

写一段程序，输入x，输出
*/

// #include <stdio.h>

// int main()
// {
//     int x = 0;
//     int y = 0;
//     scanf("%d",&x);
//     if(x < 1)
//     {
//         y = x;
//     }
//     else if(1 <= x && x < 10)
//     {
//         y = 2*x - 1;
//     }
//     else
//     {
//         y = 3*x - 11;
//     }
//     printf("%d",y);

// }

#include <stdio.h>

// int main()
// {
//     float a, b;
//     scanf("%f%f", &a, &b);  // 读入 a, b

//     if ((int)a == a && (int)b == b) {
//         // 如果 a,b 都是整数，则按整数输出
//         printf("%d %d\n", (int)a, (int)b);
//     } else {
//         // 如果 a,b 有一个是浮点数，则输出保留两位小数的结果
//         printf("%.2f %.2f\n", a, b);
//     }

//     return 0;
// }

// int print_(double a ,double b ,double c)
// {
//     if((int)a == a || (int)b == b)
//     {
//         printf("")
//     }
// }

int main()
{

    double a = 1.1;
    int b = 1 ;
    printf("%lf",a - (int)a);
}
