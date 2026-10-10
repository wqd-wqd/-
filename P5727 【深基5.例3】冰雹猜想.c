/*如果这个数字是奇数，那么将其乘 3 再加 1，否则除以 2。
经过若干次循环后，最终都会回到 1。*/
#include<stdio.h>
int deal(int x){
    if(x%2==0)x/=2;
    else x=x*3+1;
    return x;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[1000000];
    int i=0;
    a[i++]=n;
    while(n!=1){
        n=deal(n);
        a[i++]=n;
    }
    i-=1;
    for(int m=i;m>=0;m--){
        printf("%d",a[m]);
        if(m!=0)printf(" ");
    }
    return 0;
}