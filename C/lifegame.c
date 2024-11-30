#include <stdio.h>
int isAlive(int row,int col,int *ptrData_0_0);
void doloop(int *ptrMap_0_0,int *ptrData_0_0);
int row,col;
int *ptrRow = &row;
int *ptrCol = &col;

int main(){
    printf("输入行列:");
    scanf("%d%d",&row,&col);
    int data[row][col];
    int map[row][col];
    int *ptrData=data;
    int *ptrMap=map;
    for(int i=0;i<row;i++){
        for(int t=0;t<col;t++){
            data[i][t]=0;
            map[i][t]=0;
        }
    }
    //开始初始化
    int quit = 0;
    int x=0,y=0;
    while (quit==0){
        printf("输入需要初始化的生命,用x y形式表达,按q退出:");
        if(scanf("%d%d",&x,&y)==2){
            data[x-1][y-1]=1;
        }else{
            quit = 1;
        }
    }
    
    int ifContinue=1;
    while(ifContinue==1){
        doloop(ptrMap,ptrData);
        printf("是否继续?\n");
        getchar();
        scanf("%d",&ifContinue);
        if(ifContinue==0){
            break;
        }
    }
}
int isAlive(int row,int col,int*ptrData_0_0){
    if(row ==0||row==*ptrRow-1||col == 0||col == *ptrCol -1){
        return 0;
    }
    int liveArd = 0;
    int deadArd = 0;
    for(int temp1=row-1;temp1<row+2;temp1++){
        for(int temp2=col-1;temp2<col+2;temp2++){
            if(*((ptrData_0_0+temp1*(*ptrCol))+temp2)==0){
                deadArd++;
            }else if(*((ptrData_0_0+temp1*(*ptrCol))+temp2)==1){
                liveArd++;
            }
        }
    }
    if(*((ptrData_0_0+row*(*ptrCol))+col)==0){
        deadArd--;
        if(liveArd == 3){
            return 1;
        }else{
            return 0;
        }
    }else if (*((ptrData_0_0+row*(*ptrCol))+col)==1){
        liveArd--;
        if(liveArd==2||liveArd==3){
            return 1;
        }else if(liveArd<2){
            return 0;
        }else if(liveArd>3){
            return 0;
        }
    }

}
void doloop(int *ptrMap_0_0,int *ptrData_0_0){
    for(int temp_r=0;temp_r<row;temp_r++){
        for(int temp_c=0;temp_c<col;temp_c++){      
        *((ptrMap_0_0+temp_r*(*ptrCol))+temp_c)=isAlive(temp_r,temp_c,ptrData_0_0);
        }
    }
    for(int temp_r=0;temp_r<row;temp_r++){
        for(int temp_c=0;temp_c<col;temp_c++){
        *((ptrData_0_0+temp_r*(*ptrCol))+temp_c)=*((ptrMap_0_0+temp_r*(*ptrCol))+temp_c);
        }
    }
    for(int temp_r=0;temp_r<*ptrRow;temp_r++){
        for(int temp_c=0;temp_c<*ptrCol;temp_c++){
            if(*((ptrMap_0_0+temp_r*(*ptrCol))+temp_c)==0){
                putchar(' ');
            }else if(*((ptrMap_0_0+temp_r*(*ptrCol))+temp_c)==1){
                putchar('*');
            }
        }
        putchar('\n');
    }
}