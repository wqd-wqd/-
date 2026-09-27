#include<stdio.h>
int main(){
    int n,a,min;
    scanf("%d %d",&n,&a);
    min=a;
    for(int i=0;i<4;i++){
        scanf("%d",&a);
        if(a<min)min=a;
    }
    printf("%d",min);
    return 0;
}