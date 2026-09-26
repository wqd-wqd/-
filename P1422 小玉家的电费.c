#include<stdio.h>
int main(){
    int kwh;
    double expense;
    scanf("%d",&kwh);
    if(kwh>=401){
        expense=150*0.4463+250*0.4663+(kwh-400)*0.5663;
        printf("%.1f",expense);
    }else if(kwh>=151){
        expense=150*0.4463+(kwh-150)*0.4663;
        printf("%.1f",expense);
    }else{
        expense=kwh*0.4463;
        printf("%.1f",expense);
    }
    return 0;
}