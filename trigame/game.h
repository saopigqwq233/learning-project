//预处理
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
//控制行列ROW/COL
#define ROW 3
#define COL 3
//声明函数
void init();//界面
void game();//游戏函数
void init_board(char board[ROW][COL],int ,int );//初始化矩阵
void display_board(char board[ROW][COL],int row,int col);//打印三字表
void playermove(char board[ROW][COL],int row,int col);//玩家下棋
char Iswin(char board[ROW][COL],int ,int );//赢了
void computermove(char board[ROW][COL],int ,int );//电脑下棋
int isfull(char board[ROW][COL],int ,int );//判断表格是否为空