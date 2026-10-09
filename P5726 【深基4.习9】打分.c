#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int min,max,point;
    scanf("%d",&point);
    min=point;
    max=point;
    int sum=point;
    for(int i=2;i<=n;i++){
        scanf("%d",&point);
        if(point<=min)min=point;
        if(point>=max)max=point;
        sum+=point;
    }
    double jun=(double)(sum-min-max)/(n-2);
    printf("%.2f",jun);
    return 0;
}