#include<stdio.h>
int main(){
    int l,m;
    scanf("%d %d",&l,&m);
    int u,v;
    int tree[10005]={0};
    for(int i=0;i<m;i++){
        scanf("%d %d",&u,&v);
        for(int j=u;j<=v;j++){
            tree[j]=1;
        }
    }
    int count=0;
    for(int i=0;i<=l;i++){
        if(tree[i]==0)count++;
    }
    printf("%d",count);
    return 0;
}