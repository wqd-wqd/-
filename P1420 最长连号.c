#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int a,count=0;
    scanf("%d",&a);
    for(int i=1;i<n;i++){
        scanf("%d",&m);
        if(m-a==1)count++;
        a=m;
    }
    printf("%d",count);
    return 0;
}