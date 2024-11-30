#include<stdio.h>
int main (){
    char str[50];
    char restr[50];
    int i=0;
    printf("输入字符串:");
    gets(str);
    while(str[i]!=0){
        i++;
    }
    i--;
    for(int time=0;time<(i+1);time++){
        restr[time]=str[(i)-time];
    }
    puts(restr);
}