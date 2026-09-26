#include<stdio.h>//方法1，枚举法较麻烦
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            if(b>c){
                printf("%d %d %d",c,b,a);
            }else{
                printf("%d %d %d",b,c,a);
            }
        }else{
            printf("%d %d %d",b,a,c);
        }
    }else{
        if(a<c){
            if(c<b){
                printf("%d %d %d",a,c,b);
            }else{
                printf("%d %d %d",a,b,c);
            }
        }else{
            printf("%d %d %d",c,a,b);
        }
    }
    return 0;
}
/*#include <stdio.h>    三次交换

int main() {
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) { t = a; a = b; b = t; }
    if (a > c) { t = a; a = c; c = t; }
    if (b > c) { t = b; b = c; c = t; }

    printf("%d %d %d\n", a, b, c);
    return 0;
}*/