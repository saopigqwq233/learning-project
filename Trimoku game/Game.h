#ifndef TRIMOKU_GAME_GAME_H
#define TRIMOKU_GAME_GAME_H
//ͷ�ļ�
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
//�궨��
//3��3����
#define ROW 3
#define COL 3
//��ҷ���Ϊ@�����Է���Ϊ��
//��������
void Menu();//չʾѡ��˵�
int Decide();//�û�ѡ����Ϸ�����˳�
void BegainGame();//��Ϸ��ʼ����
void EndGame();//��Ϸ��������
//��Ϸ�л��õ��ĺ���
void InitBoard(char **Board);//��ʼ������
void PrintBoard(char **Board);//��ӡ���̼�������
void PlayerMove(char **Board);//�������
void ComputerMove(char **Board);//��������
char IsWin(char **Board);//�ж��Ƿ�Ӯ,˭Ӯ����˭�ķ���,���򷵻�NULL
char IsFull(char **Board);//�ж��Ƿ�ƽ��
void PrintOut(char **Board);//��ӡ��ʤ���
#endif //TRIMOKU_GAME_GAME_H