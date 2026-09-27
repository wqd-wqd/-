#include<stdio.h>
int main(){
    int n,k,num;
    int i=0,o=0;
    int s[11111],d[11111];//d是可被整除
    scanf("%d %d",&n,&k);
    for(int m=1;m<=n;m++){
        if(m%k==0){
            d[o]=m;
            o++;
        }else{
            s[i]=m;
            i++;
        }
    }
    int sum1=0,sum2=0;
    int ii=i,oo=o;
    for(;i>0;i--){
        sum1+=s[i-1];
    }
    for(;o>0;o--){
        sum2+=d[o-1];
    }
    printf("%.1f %.1f",(double)sum2/oo,(double)sum1/ii);
    return 0;
}