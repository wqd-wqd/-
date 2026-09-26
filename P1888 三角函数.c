#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    int t;
    if(a>b)t=a,a=b,b=t;//b>=a
    if(a>c)t=a,a=c,c=t;//c>=a
    if(c>b)t=c,c=b,b=t;//b>=c  a<=c<=b
    int x=a,y=b;
    while(x!=0){
        d=y%x;
        y=x;
        x=d;
    }
    a/=y;
    b/=y;
    printf("%d/%d",a,b);
    return 0;
}