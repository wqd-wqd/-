#include<stdio.h>
int main(){
    int n,num,price,x,min,sum;
    scanf("%d",&n);
    scanf("%d %d",&num,&price);
    x=(n+num-1)/num;
    sum=x*price;
    min=sum;
    for(int i=2;i<=3;i++){
        scanf("%d %d",&num,&price);
        x=(n+num-1)/num;
        sum=x*price;
        if(sum<min)min=sum;
    }
    printf("%d",min);
    return 0;
}