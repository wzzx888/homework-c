#include<stdio.h>
int main(){
    float tax,money,rate,income,taxation,reduce;
    int spend;
    printf("�������������");
    scanf("%f",&income);
    printf("���������ר��ӿ۳�");
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
        printf("������Χ");
        return 0;
    }
    taxation=tax*rate-reduce;
    printf("Ӧ��˰���ö�Ϊ%.2f\nӦ��˰��%.2f",tax,taxation);
    
   
    return 0;
}