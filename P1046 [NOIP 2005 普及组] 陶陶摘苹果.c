#include<stdio.h>
int main(){
    int high,l,count=0;
    int apple[10];
    for(int i=0;i<10;i++){
        scanf("%d",&apple[i]);
    }
    scanf("%d",&l);
    high=l+30;
    for(int i=0;i<10;i++){
        if(apple[i]<=high){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}