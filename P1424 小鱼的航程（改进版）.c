#include<stdio.h>
int main(){
    int x,n,d,s,w;
    int extra=0;
    scanf("%d %d",&x,&n);
    w=n/7;
    d=n%7;
    if(x>=1&&x<=5){
        if(x+d==7){
            extra=1;
        }else if(x+d>7){
            extra=2;
        }else{
            extra=0;
        }
    }
    if(x==6){
        if(d==0){
            extra=0;
        }else if(d==1){
            extra=1;
        }else{
            extra=2;
        }
    }
    if(x==7){
        if(d==0){
            extra=0;
        }else{
            extra=1;
        }
    }
    n=n-2*w-extra;
    s=n*250;
    printf("%d",s);
    return 0;
}