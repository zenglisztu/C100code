#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double dist(double x1,double y1,double x2,double y2);
int main()
{
    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    printf("dist = %.2lf\n",dist(x1,y1,x2,y2)) ;
    system("pause");
    return 0;
}

double dist(double x1,double y1,double x2,double y2)
{
    return pow((pow(x1-x2,2)+pow(y1-y2,2)),0.5);
}