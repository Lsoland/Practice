#include <stdio.h>
int main (){
    int temp = 1;
    int result = 0;
    for (int num=1;num<21;num++){
        for(int count=1;count<num+1;count++){
            temp *= count;
        }
        result += temp;
        temp = 1;
    }
    printf("%d",result);

}