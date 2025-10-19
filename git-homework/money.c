#include<stdio.h>
#include<math.h>
int main()
{
    double money,rate,year,inflation,final,fact,earn;
    printf("请输入初始金额");
    scanf("%lf",&money);
    printf("请输入年利率");
    scanf("%lf",&rate);
    printf("请输入存款年限");
    scanf("%lf",&year);
    printf("请输入年通货膨胀率");
    scanf("%lf",&inflation);
    final = money * pow(1+ rate, year);
    fact = final / pow(1 + inflation, year);
    earn = pow(fact / money, 1 / year) - 1;
    printf("名义终值为%.2f\n",final);
    printf("实际购买力为%.2f\n",fact);
    printf("实际年化收益率为%.2f%%\n",earn * 100.0);
   
    return 0;
}