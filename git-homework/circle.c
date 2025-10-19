#include<stdio.h>
#include<math.h>
#define M_PI 3.14
int main()
{
    double r;
    double c,s,v;
    printf("请输入圆的半径");
    scanf("%lf",&r);
    c=2*M_PI*r;
    s=M_PI*pow(r,2);
    v=(4/3.0)*M_PI*pow(r,3);
    printf("圆的周长是%.2f\n",c);
    printf("圆的面积是%.2f\n",s);
    printf("球的体积是%.2f\n",v);
   
    return 0;
}