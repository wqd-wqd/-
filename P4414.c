#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int t;
    int count=0;
    char ch;
    if(a>b)t=a,a=b,b=t;//b>a
    if(a>c)t=a,a=c,c=t;//c>a
    if(b>c)t=b,b=c,c=t;//c>b  c>b>a   
    for(int i=0;i<3;i++){
        scanf(" %c",&ch);
        if(ch=='A'){
            printf("%d",a);
        }else if(ch=='B'){
            printf("%d",b);
        }else{
            printf("%d",c);
        }
        count++;
        if(count<=2)printf(" ");
    }
    return 0;
}