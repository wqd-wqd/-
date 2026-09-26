/*小 B 喜欢吃苹果。她现在有 m（1≤m≤100）个苹果，
吃完一个苹果需要花费 t（0≤t≤100）分钟，吃完一个后立刻开始吃下一个。
现在时间过去了 s（1≤s≤10000）分钟，请问她还有几个完整的苹果？*/
#include<stdio.h>
int main(){
    int m,t,s,n;
    scanf("%d %d %d",&m,&t,&s);
    if(t!=0){
    n=(s+t-1)/t;
    if(m>n){
    printf("%d",m-n);
    }else{
        printf("0");
    }
    }else{
        printf("0");
    }
    return 0;
}