#include<stdio.h>
#include<math.h>
#define M_PI 3.14
int main()
{
    double r;
    double c,s,v;
    printf("������Բ�İ뾶");
    scanf("%lf",&r);
    c=2*M_PI*r;
    s=M_PI*pow(r,2);
    v=(4/3.0)*M_PI*pow(r,3);
    printf("Բ���ܳ���%.2f\n",c);
    printf("Բ�������%.2f\n",s);
    printf("��������%.2f\n",v);
   
    return 0;
}