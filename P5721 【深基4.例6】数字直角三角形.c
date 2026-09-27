#include<stdio.h>
int main(){
    int n,x,count=1;
    int j=1;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(;count<=i;count++){
            printf("%.02d",j);
            j++;
        }
        count =1;
        printf("\n");
    }
    return 0;
}