#include<stdio.h>
int main(){
    int n,m;
    char ASCII=65;
    printf("请输入n,m:");
    scanf("%d%d",&n,&m);
    if (n>26||m>26){
        printf("输入数据有误!");
        return 0;
    }
    char matrix[n][m];
    for(int row=0;row<n;row++){
        for(int line=0;line<m;line++){
            int add = 0;
            if (row-line>0){
                add = row - line;
            }else{
                add = -(row - line);
            }
            matrix[row][line]=ASCII+add;
        }
    }
    for(int row=0;row<n;row++){
        for(int line=0;line<m;line++){
          putchar(matrix[row][line]);
        }
        putchar('\n');
    }
}