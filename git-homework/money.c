#include<stdio.h>
#include<math.h>
int main()
{
    double money,rate,year,inflation,final,fact,earn;
    printf("�������ʼ���");
    scanf("%lf",&money);
    printf("������������");
    scanf("%lf",&rate);
    printf("������������");
    scanf("%lf",&year);
    printf("��������ͨ��������");
    scanf("%lf",&inflation);
    final = money * pow(1+ rate, year);
    fact = final / pow(1 + inflation, year);
    earn = pow(fact / money, 1 / year) - 1;
    printf("������ֵΪ%.2f\n",final);
    printf("ʵ�ʹ�����Ϊ%.2f\n",fact);
    printf("ʵ���껯������Ϊ%.2f%%\n",earn * 100.0);
   
    return 0;
}