#include<stdio.h>
int main(){
    int N;//sum
    int skip=0;
    scanf("%d",&N);
    int X=1,K=1;
    int weekly=N/52;
    int countX=1,countK=0;
    for(int i=1;i<7;i++){
        countX++;
        countK+=i;//7x与21k
    }
    for(;skip==0;K++){
        X=1;
        for(;X<=100;X++)
        if(countX*X+countK*K==weekly){
            skip=1;
            break;}
    }
    printf("%d\n%d",X,K-1);
    return 0;
}