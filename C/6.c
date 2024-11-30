#include <stdio.h>
int main(){
    int month = 3;
    int totalRAB = 0;
    int rab[40];
    rab[0]=1;rab[1]=1;
    for (;month<41;month++){
        rab[month-1]=rab[month-2]+rab[month-3];
    }
    for (int i = 0;i<40;i++){
        totalRAB += rab[i];
    }
    printf("40个月后的兔子总数为:%d",totalRAB);
}