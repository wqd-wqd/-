#include<stdio.h>
int main(){
    int a,t=1;
    scanf("%d",&a);
    int m=a;
    while(m>1){
        m=m/2;
        t++;
    }
    printf("%d",t);
    return 0;
}