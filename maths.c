#include<stdio.h>
#include<math.h>
int main()
{
    int num,hun,ten,one,sum,mult;
    printf("��������λ��");
    scanf("%d",&num);
    hun=num/100;
    ten=(num/10)-(hun*10);
    one=num%10;
    sum=hun+ten+one;
    mult=hun*ten*one;
    printf("����������֮��Ϊ%d\n����������֮��Ϊ%d",sum,mult);

      return 0;
}