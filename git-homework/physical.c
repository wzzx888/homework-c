#include<stdio.h>
#include<math.h>
int main()
{
    double m1,m2,v1,v2,loss,energy,percentage;
    printf("������m1��ֵkg\n������m2��ֵkg\n������v1��ֵkg\n������v2��ֵkg\n");
    scanf("%lf%lf%lf%lf",&m1,&m2,&v1,&v2);
    energy=0.5*m1*pow(v1,2)+0.5*m2*pow(v2,2);
    loss=0.5*(m1*m2)/(m1+m2)*pow((v1-v2),2);
    percentage=loss/energy*100;
    printf("��ײǰ�Ķ���Ϊ%.2fJ\n",energy);
    printf("��ʧ�Ķ���Ϊ%.2fJ",energy);
    printf("��ʧ�Ķ���ռ��ײǰ���ܵİٷֱ�Ϊ%.2f%%\n",percentage);

    return 0;
}