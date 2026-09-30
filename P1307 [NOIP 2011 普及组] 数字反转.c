#include<stdio.h>
int main(){
    int N,sum=0;
    scanf("%d",&N);
    int fu=0;
    if(N<0){
        fu=1;
        N=-N;
    }
    int d,x=N;
    int mask=1;
    while(x>9){
        mask*=10;
        x/=10;
    }
    while(N>0){
        d=N%10;
        sum+=d*mask;
        mask/=10;
        N/=10;
    }
    if(fu==1)printf("-");
    printf("%d",sum);
    return 0;
}