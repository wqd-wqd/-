#include<stdio.h>
int main(){
    int k,sum=0;
    scanf("%d",&k);
    int day=0,m;
    for(int i=1;day<k;i++){     //一次几个金币
        for(int j=0;j<i;j++){     //加几天
            sum+=i;
            day++;
            if(day>=k)break;
        }
    }
    printf("%d",sum);
    return 0;
}