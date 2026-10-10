#include<stdio.h>
int main(){
    int num,count=0;
    int i=0,j=0;
    scanf("%d",&num);
    int a[100];
    for(;i<num;i++){
        count=0;
        scanf("%d",&a[i]);
        for(j=0;j<i;j++){
            if(a[j]<a[i])count++;
        }
        printf("%d",count);
        if(i!=num-1)printf(" ");
    }
    return 0;
}