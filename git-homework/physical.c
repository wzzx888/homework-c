#include<stdio.h>
#include<math.h>
int main()
{
    double m1,m2,v1,v2,loss,energy,percentage;
    printf("请输入m1的值kg\n请输入m2的值kg\n请输入v1的值kg\n请输入v2的值kg\n");
    scanf("%lf%lf%lf%lf",&m1,&m2,&v1,&v2);
    energy=0.5*m1*pow(v1,2)+0.5*m2*pow(v2,2);
    loss=0.5*(m1*m2)/(m1+m2)*pow((v1-v2),2);
    percentage=loss/energy*100;
    printf("碰撞前的动能为%.2fJ\n",energy);
    printf("损失的动能为%.2fJ",energy);
    printf("损失的动能占碰撞前动能的百分比为%.2f%%\n",percentage);

    return 0;
}