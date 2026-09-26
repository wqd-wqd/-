#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=0,y=0;
    y=5*n;
    x=3*n+11;
    if(y<x){
        printf("Local");
    }else{
        printf("Luogu");
    }
    return 0;
}