/*一个三角形的三边长分别是 a、b、c，那么它的面积为  。
输入这三个数字，计算三角形的面积，四舍五入精确到 1 位小数。*/
#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double p=(a+b+c)/2.0;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1f",s);
    return 0;
}