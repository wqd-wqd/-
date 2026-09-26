#include<stdio.h>
int main(){
    int t1,t2,day=1;
    int zui=0,sum1=0,sum2=0;
    for(;day<=7;day++){
        scanf("%d %d",&t1,&t2);
        sum1=t1+t2;
        if(sum1>8&&sum1>sum2){
            zui=day;
            sum2=sum1;
        }
    }
    if(zui==0){
        printf("0");
    }else{
        printf("%d",zui);
    }
    return 0;
}