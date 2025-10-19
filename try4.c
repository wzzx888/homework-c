#include <stdio.h>
 int main() {
     int num, a, b, c, sum, product;
     printf("请输入一个三位正整数：");
     scanf("%d", &num);
     
     // 提取个位、十位、百位数字
     a = num % 10;        // 个位数字
     b = (num / 10) % 10; // 十位数字
     c = num / 100;       // 百位数字
     
     // 计算和与乘积
     sum = a + b + c;
     product = a * b * c;
     
     // 输出结果
     printf("数字之和：%d\n", sum);
     printf("数字之积：%d\n", product);
     
     return 0;
 }