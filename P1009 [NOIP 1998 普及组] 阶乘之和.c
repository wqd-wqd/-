#include<stdio.h>
#include<string.h>

#define MAX 200
int main(){
    int n,temp;
    int fact[MAX],sum[MAX];
    memset(sum,0,sizeof(sum));
    memset(fact,0,sizeof(fact));
    fact[0]=1;
    scanf("%d",&n);
    int carry;
    for(int i=1;i<=n;i++){
        carry=0;
        for(int j=0;j<MAX;j++){
            temp=fact[j]*i+carry;
            fact[j]=temp%10;
            carry=temp/10;
        }
        carry=0;
        for(int j=0;j<MAX;j++){
            temp=sum[j]+fact[j]+carry;
            sum[j]=temp%10;
            carry=temp/10;
        }
    }
    int pos=MAX-1;
    while(pos>0&&sum[pos]==0)pos--;
    for(int i=pos;i>=0;i--){
        printf("%d",sum[i]);
    }
    return 0;
}