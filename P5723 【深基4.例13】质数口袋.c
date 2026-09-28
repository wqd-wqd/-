#include<stdio.h>
int main(){
    int L,sum=0,m=0;
    scanf("%d",&L);
    int s[10000];
    for(int i=2;;i++){
        int zhi=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                zhi=0;
                break;
            }
        }
        if(zhi==1){
            if(sum+i>L)break;
            sum+=i;
            s[m]=i;
            m++;
        }
    }
    for(int i=0;i<m;i++){
    printf("%d\n",s[i]);}
    printf("%d\n",m);
    return 0;
}