#include<stdio.h>
int main(){
    float tax,money,rate,income,taxation,reduce;
    int spend;
    printf("请输入你的收入");
    scanf("%f",&income);
    printf("请输入你的专项附加扣除");
    scanf("%d",&spend);
    if(spend>3000){
        spend=3000;
    }else{(spend<=3000);
        spend=spend;
    }
    tax=income-5000-spend;
    if(tax<=0){
        rate=0;
        taxation=0;
        reduce=0;
    }if(tax<=3000&&tax>0){
        rate=0.03;
        reduce=0;
    }if(tax<12000&&tax>3000){
        rate=0.1;
        reduce=210;
    }if(tax<=25000&&tax>=12000){
        rate=0.2;
        reduce=1410;
    }if(tax>25000){
        printf("超出范围");
        return 0;
    }
    taxation=tax*rate-reduce;
    printf("应纳税所得额为%.2f\n应纳税额%.2f",tax,taxation);
    
   
    return 0;
}