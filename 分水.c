/*现在有 t 毫升肥宅快乐水，要均分给 n 名同学。
每名同学需要 2 个杯子。现在想知道每名同学可以获得多少毫升饮料（严格精确到小数点后 3 位），
以及一共需要多少个杯子。*/
#include<stdio.h>
int main(){
    double t;
    int n;
    scanf("%lf %d",&t,&n);
    printf("%.3f \n%d",t/n,2*n);
    return 0;
}