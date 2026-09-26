#include<stdio.h>
int main(){
    int a,b,c,t;
    scanf("%d %d %d",&a,&b,&c);
    if (a > b) { t = a; a = b; b = t; }//a<=b
    if (a > c) { t = a; a = c; c = t; }//a<=c
    if (b > c) { t = b; b = c; c = t; }//b<=c
    int c2=c*c,b2=b*b,a2=a*a;
    if(a+b>c&&c-a<b){//a<=b<=c
        if(c2>a2+b2){
            printf("Obtuse triangle\n");
        }else if(c2==a2+b2){
            printf("Right triangle\n");
        }else{
            printf("Acute triangle\n");
        }
        if(a==b||b==c||c==a)printf("Isosceles triangle\n");
        if(a==b&&b==c)printf("Equilateral triangle\n");
}else{printf("Not triangle\n");}
    return 0;
}