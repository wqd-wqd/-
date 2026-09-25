/*一只大象口渴了，要喝 20 升水才能解渴，但现在只有一个深 h 厘米，
底面半径为 r 厘米的小圆桶 （h 和 r 都是整数）。
问大象至少要喝多少桶水才会解渴。
Update：数据更新，这里我们近似地取圆周率 π=3.14。*/
#include<stdio.h>
int main(){
    int h,r;
    scanf("%d %d",&h,&r);
    double v=h*r*r*3.14;
    int n=20000/v;
    if(n*v<20000){
        n++;
    }
    printf("%d",n);
    return 0;
}