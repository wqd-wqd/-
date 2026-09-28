#include<stdio.h>
int main(){
    int k,n=1;
    scanf("%d",&k);
    double sum=0,s=1;
    for(;sum<=k;n++){
        sum+=1.0/n;
    }
    printf("%d",n-1);
    return 0;
}