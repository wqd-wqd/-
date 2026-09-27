#include<stdio.h>
int main(){
    char s[20];
    scanf("%s",s);
    int sum=0;
    sum+=(s[0]-'0')*1;
    for(int i=2;i<5;i++){
        sum+=(s[i]-'0')*i;
    }
    for(int i=6;i<11;i++){
        sum+=(s[i]-'0')*(i-1);
    }
    int check=sum%11;
    char co = (check == 10) ? 'X' : check + '0';
    if(s[12]==co){
        printf("Right");
    }else if(check==10){
        s[12]='X';
        printf("%s",s);
    }else{
        s[12]=co;
        printf("%s",s);
    }
    return 0;
}