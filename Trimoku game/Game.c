#include "Game.h"
void Menu()
{
    printf("******************************\n");
    printf("******************************\n");
    printf("*********  1.Play  ***********\n");
    printf("*********  0.exit  ***********\n");
    printf("******************************\n");
    printf("******************************\n");
}
int Decide()
{
    printf("������ 1 ���� 0 ѡ��:\n");
    short int choice;
    do
    {
        scanf("%hd",&choice);
        if(choice==1)
            return 1;
        else if(choice==0)
            return 0;
        else //����Ȳ�Ϊ0Ҳ��Ϊ1����ô��������
            printf("�������룬������ѡ��\n");
    }while (choice);
}
void BegainGame()
{
    char flag;
    char Board[ROW][COL];//����һ��ROW��COL���Ķ�ά����
    InitBoard(Board);
    do
    {
        PrintBoard(Board);
        PlayerMove(Board);
/*        if((flag=IsWin(Board)))
        {
            if(flag==' ')
        }*/
    }
    while(1);
}
void PrintBoard(char **Board)
{
    for (int i = 0; i < ROW; ++i)
    {
        printf("%c |%c |%c\n",Board[i][0],Board[i][1],Board[i][2]);
        if(i!=ROW-1)
            printf("--------");
    }
}
