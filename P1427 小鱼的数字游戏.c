#include<stdio.h>
int main(){
    int  a[200];
    int i=0;
    for(;i<101;i++){
        scanf("%d",&a[i]);
        if(a[i]==0)break;
    }
    for(;i>=1;i--){
        printf("%d",a[i-1]);
        if(i!=1)printf(" ");
    }
    return 0;
}