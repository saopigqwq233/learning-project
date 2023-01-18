//实现函数
#include "game.h"
void init()
{
    printf("**************************\n");
    printf("******  1.play    ********\n");
    printf("******  0.exit    ********\n");
    printf("**************************\n");
    printf("玩游戏，请选择  1\n");
    printf("退出游戏，请选择 0\n");
    printf("请选择--->");
}
void game()
{
    printf("您的棋子是#，电脑棋子为*\n"
           "注意！！！\n"
           "从1开始，从左到右纵坐标增加\n"
           "从1开始，从上到下横坐标增加\n"
           "游戏快乐！！！\n");
    srand((unsigned ) time(NULL));
    char board[ROW][COL];
    init_board(board,ROW,COL);
    while (1)
    {   //玩家走
        display_board(board, ROW, COL);
        printf("玩家选择坐标-->");
        playermove(board, ROW, COL);
        char ret = Iswin(board, ROW, COL);
        if(ret=='#')
        {
            printf("玩家获胜\n");
            display_board(board,ROW,COL);
            printf("输入1开启新一轮游戏，0结束游戏\n您的选择-->");
            break;
        }
        if(ret=='q')
        {
            printf("平局");
            display_board(board,ROW,COL);
            printf("输入1开启新一轮游戏，0结束游戏\n您的选择-->");
            break;
        }
        //电脑走
        computermove(board, ROW, COL);
        char aet = Iswin(board, ROW, COL);
        if(aet=='*')
        {
            printf("电脑获胜\n");
            printf("输入1开启新一轮游戏，0结束游戏\n您的选择-->");
            break;
        }
        if(aet=='q')
        {
            printf("平局");
            display_board(board,ROW,COL);
            printf("输入1开启新一轮游戏，0结束游戏\n您的选择-->");
            break;
        }
    }
}
void init_board(char board[ROW][COL],int row,int col)//初始化
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            board[i][j]=' ';
        }
    }
}
void display_board(char board[ROW][COL],int row,int col)//打印三字表
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            printf("%c ",board[i][j]);
            if(j!=col-1)
            {
                printf("|");
            }
        }
        printf("\n");
        if(i!=row-1)
        printf("--|--|--\n");
    }
}
void playermove(char board[ROW][COL],int row,int col)//玩家下棋
{
    int x,y;
    while (1)
    {
        scanf("%d %d",&x,&y);
        if(x>row||y>col||x<=0||y<=0)
        {
            printf("输入超出限制，重新输入-->");
            continue;
        }
         else if(board[x-1][y-1]!=' ')
        {
            printf("该空已有,请从新输入-->");
            continue;
        }
         else
        {
             board[x-1][y-1]='#';
             break;
        }
    }
}
void computermove(char board[ROW][COL],int row,int col)//电脑下棋
{
    while (1)
    {
        int x = rand() % row;
        int y = rand() % col;
        if(board[x][y]!=' ')
        {
            continue;
        }
        else
        {
            board[x][y]='*';
            break;
        }
    }
}
char Iswin(char board[ROW][COL],int row,int col)//赢了or平局or继续
{
    for (int i = 0; i < row; ++i)//横行
    {
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2])
        {
            return board[i][0];
        }
    }
    for (int i = 0; i < col; ++i)//纵行
    {
        if(board[0][i]==board[1][i]&&board[1][i]==board[2][i])
        {
            return board[0][i];
        }
    }
    if(board[0][0]==board[1][1]&&board[2][2])
        return board[0][0];
    else if(board[0][2]==board[1][1]&&board[1][1]==board[2][0])
        return board[1][1];
    else if(!isfull(board,ROW,COL))
        return 'o';
    else
        return 'q';
}
int isfull(char board[ROW][COL],int row,int col)//判断表格是否为空
{
    int lable=0;
    for ( int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            if (board[i][j] != ' ')
            {
                lable=1;
                break;
            }
        }
    }
    if(lable==0)
        return 1;
    else
        return 0;
}
