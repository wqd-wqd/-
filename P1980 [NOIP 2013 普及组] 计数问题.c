#include<stdio.h>
int main(){
    int n,x,d;
    int count=0;
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++){
        int m=i;//存放n
        int mask=1;
        int y=i;
        while(m>9){
            m/=10;
            mask*=10;
        }//计算几位数
        while(mask>=1){
            d=y/mask;
            y%=mask;
            mask/=10;
            if(d==x)count++;
        }
    }
    printf("%d",count);
    return 0;
}