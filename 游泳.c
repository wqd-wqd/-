/*从 a 时 b 分一直游泳到当天的 c 时 d 分，请你帮小鱼计算一下，它这天一共游了多少时间呢？*/
#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int t=c*60+d-a*60-b;
    int e=t/60;
    int f=t%60;
    printf("%d %d",e,f);
    return 0;
}