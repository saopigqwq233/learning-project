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
        scanf("%d",&choice);
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
    char Board[ROW][COL];//����һ��ROW��COL���Ķ�ά����
    InitBoard(Board);
    do
    {
        PrintBoard(Board);
        PlayerMove(Board);
    }
    while(1);
}