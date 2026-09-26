#include<stdio.h>
int main(){
    int y,m,p=0;
    scanf("%d %d",&y,&m);
    if(y%4==0&&y%100!=0)p=1;
    if(y%100==0&&y%400==0)p=1;
    if(m==4||m==6||m==9||m==11){
        printf("30");
    }else if(m==2){
        if(p==1){
            printf("29");
    }else{
        printf("28");
    }
}
    else{
        printf("31");
    }
    return 0;
}