#include<stdio.h>
#include<math.h>
int main(){
    float A_money, B_money, weight,extra;
    char area;
    printf("请输入快递重量(kg)");
    scanf("%f(kg)",&weight) ;
    printf("请输入邮寄区域 (A 或 B): ");
    scanf(" %c",&area);
    if (weight > 1) {
     extra = weight - 1;
        int extra_units = ceil(extra / 0.5);
        A_money =8+ extra_units * 2;
        B_money = 12 + extra_units * 3;
    } else {
        A_money = 8;
        B_money = 12;
    }
    if (area == 'A' || area == 'a'){
     printf("A快递费用为%.2f元\n",A_money);
    }else{
     printf("B快递费用为%.2f元\n",B_money);
    }
    
    
    return 0;
}