#include<stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    int squre=n*n;
    for(int i=1;i<=squre;i++){
        printf("%.2d",i);
        count++;
        if(count%n==0)printf("\n");
    }//正方形
    printf("\n");
    int blank=n-1;
    int countx=1;
    int t=blank;//循环外t储存初始blank
    for(int i=1;i<=squre;i++){
        if(blank!=0){
        printf("  ");
        blank--;}
        else if(i%n!=0){
            printf("%.2d",countx);
            countx++;
        }else if(i%n==0){
            printf("%.2d\n",countx);
            countx++;
            t-=1;
            blank=t;
    }
}
    return 0;
}