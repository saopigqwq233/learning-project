//ʵ�ֺ���
#include "game.h"
void init()
{
    printf("**************************\n");
    printf("******  1.play    ********\n");
    printf("******  0.exit    ********\n");
    printf("**************************\n");
    printf("����Ϸ����ѡ��  1\n");
    printf("�˳���Ϸ����ѡ�� 0\n");
    printf("��ѡ��--->");
}
void game()
{
    printf("����������#����������Ϊ*\n"
           "ע�⣡����\n"
           "��1��ʼ������������������\n"
           "��1��ʼ�����ϵ��º���������\n"
           "��Ϸ���֣�����\n");
    srand((unsigned ) time(NULL));
    char board[ROW][COL];
    init_board(board,ROW,COL);
    while (1)
    {   //�����
        display_board(board, ROW, COL);
        printf("���ѡ������-->");
        playermove(board, ROW, COL);
        char ret = Iswin(board, ROW, COL);
        if(ret=='#')
        {
            printf("��һ�ʤ\n");
            display_board(board,ROW,COL);
            printf("����1������һ����Ϸ��0������Ϸ\n����ѡ��-->");
            break;
        }
        if(ret=='q')
        {
            printf("ƽ��");
            display_board(board,ROW,COL);
            printf("����1������һ����Ϸ��0������Ϸ\n����ѡ��-->");
            break;
        }
        //������
        computermove(board, ROW, COL);
        char aet = Iswin(board, ROW, COL);
        if(aet=='*')
        {
            printf("���Ի�ʤ\n");
            printf("����1������һ����Ϸ��0������Ϸ\n����ѡ��-->");
            break;
        }
        if(aet=='q')
        {
            printf("ƽ��");
            display_board(board,ROW,COL);
            printf("����1������һ����Ϸ��0������Ϸ\n����ѡ��-->");
            break;
        }
    }
}
void init_board(char board[ROW][COL],int row,int col)//��ʼ��
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            board[i][j]=' ';
        }
    }
}
void display_board(char board[ROW][COL],int row,int col)//��ӡ���ֱ�
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
void playermove(char board[ROW][COL],int row,int col)//�������
{
    int x,y;
    while (1)
    {
        scanf("%d %d",&x,&y);
        if(x>row||y>col||x<=0||y<=0)
        {
            printf("���볬�����ƣ���������-->");
            continue;
        }
         else if(board[x-1][y-1]!=' ')
        {
            printf("�ÿ�����,���������-->");
            continue;
        }
         else
        {
             board[x-1][y-1]='#';
             break;
        }
    }
}
void computermove(char board[ROW][COL],int row,int col)//��������
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
char Iswin(char board[ROW][COL],int row,int col)//Ӯ��orƽ��or����
{
    for (int i = 0; i < row; ++i)//����
    {
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2])
        {
            return board[i][0];
        }
    }
    for (int i = 0; i < col; ++i)//����
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
int isfull(char board[ROW][COL],int row,int col)//�жϱ���Ƿ�Ϊ��
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
