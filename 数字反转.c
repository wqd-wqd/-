/*输入一个不小于 100 且小于 1000，同时包括小数点后一位的一个浮点数，例如 123.4 ，要求把这个数字翻转过来，变成 4.321 并输出*/
#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    int ge,shi,bai;
    ge=a%10;
    bai=a/100;
    shi=a/10%10;
    printf("%d%c%d%d%d",b,c,ge,shi,bai);
    return 0;
}