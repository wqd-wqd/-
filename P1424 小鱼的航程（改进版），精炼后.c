#include<stdio.h>
int main(){
    int x,n,total,weeks,d;
    scanf("%d %d",&x,&n);
    weeks=n/7;
    total=weeks*5*250;
    d=n%7;
    for(int i=1;i<=d;i++){
        int day=x+i;
        if(day<=6){
            total+=250;
        }else if(day>8){
            total+=250;
        }
    }
    printf("%d",total);
    return 0;
}