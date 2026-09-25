/*学校和 yyy 的家之间的距离为 s 米，而 yyy 以 v 米每分钟的速度匀速走向学校。
在上学的路上，yyy 还要额外花费 10 分钟的时间进行垃圾分类。
学校要求必须在上午 8:00 到达，请计算在不迟到的前提下，yyy 最晚能什么时候出门。
由于路途遥远，yyy 可能不得不提前一点出发，但是提前的时间不会超过一天。
注意，yyy 只能在每分钟的第 0 秒时出发。*/
#include<stdio.h>
int main(){
    int s,v;
    scanf("%d %d",&s,&v);
    int t=(s+v-1)/v+10;
    int total=8*60-t;
    if(total<0){
    total=24*60+8*60-t;
    }
    printf("%02d:%d",total/60,total%60);
    return 0;
}