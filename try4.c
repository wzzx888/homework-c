#include <stdio.h>
 int main() {
     int num, a, b, c, sum, product;
     printf("������һ����λ��������");
     scanf("%d", &num);
     
     // ��ȡ��λ��ʮλ����λ����
     a = num % 10;        // ��λ����
     b = (num / 10) % 10; // ʮλ����
     c = num / 100;       // ��λ����
     
     // �������˻�
     sum = a + b + c;
     product = a * b * c;
     
     // ������
     printf("����֮�ͣ�%d\n", sum);
     printf("����֮����%d\n", product);
     
     return 0;
 }