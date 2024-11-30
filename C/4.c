#include<stdio.h>
#define M_ID_1 0x201
#define M_ID_2 0x202
#define M_ID_3 0x203
#define M_ID_4 0x204
int main(){
    int Receive_ID;
    printf("接受的电机ID:");
    scanf("%x",&Receive_ID);
    switch (Receive_ID)
    {
    case M_ID_1:
        printf("这是1号电机发来的数据");
        break;
    case M_ID_2:
        printf("这是2号电机发来的数据");
        break;
    case M_ID_3:
        printf("这是3号电机发来的数据");
        break;
    case M_ID_4:
        printf("这是4号电机发来的数据");
        break;
        
    
    default:
        printf("接受的电机ID错误!");
        break;
    }
}