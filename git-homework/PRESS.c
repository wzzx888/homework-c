#include<stdio.h>
#include<math.h>
int main(){
    float A_money, B_money, weight,extra;
    char area;
    printf("������������(kg)");
    scanf("%f(kg)",&weight) ;
    printf("�������ʼ����� (A �� B): ");
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
     printf("A��ݷ���Ϊ%.2fԪ\n",A_money);
    }else{
     printf("B��ݷ���Ϊ%.2fԪ\n",B_money);
    }
    
    
    return 0;
}