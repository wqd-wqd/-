#include<stdio.h>
int main(){
    int budget,leftover,full;
    int X;
    int allowance=300;
    int current=0,deposit=0;
    for(X=1;X<=12;X++){
        current+=allowance;
        scanf("%d",&budget);
        leftover=current-budget;
        if(leftover<0){
            printf("-%d",X);
            return 0;
        }
        if(leftover>=100){
            full=leftover/100;//剩余的完整100
            deposit+=full*100;//每个月存入的金额
            leftover-=full*100;
        }
        current=leftover;
        leftover=0;
    }
    printf("%d",(int)(deposit*1.2)+current);
    return 0;
}