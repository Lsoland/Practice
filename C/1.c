#include <stdio.h>
int main(){
    int ASCII = 65;
    int add = 0;
    for (int row = 1;row<7;row++){
        for( int times = 1;times<row+1;times++,add++){
            putchar(ASCII+add);
        }
        putchar('\n');
    }
}