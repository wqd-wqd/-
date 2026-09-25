/*总成绩=作业成绩×20%+小测成绩×30%+期末考试成绩×50%
牛牛想知道，这门课程自己最终能得到多少分。*/
#include<stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    printf("%d",(int)(A*0.2+B*0.3+C*0.5));
    return 0;
}