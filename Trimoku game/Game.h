#ifndef TRIMOKU_GAME_GAME_H
#define TRIMOKU_GAME_GAME_H
//头文件
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
//宏定义
//3×3棋盘
#define ROW 3
#define COL 3
//函数声明
void Menu();//展示选择菜单
int Decide();//用户选择游戏或者退出
void BegainGame();//游戏开始函数
void EndGame();//游戏结束函数
//游戏中会用到的函数
void InitBoard(char **Board);//初始化棋盘
void PrintBoard(char **Board);//打印棋盘及其内容
void PlayerMove(char **Board);//玩家下棋
void ComputerMove(char **Board);//电脑下棋
char IsWin(char **Board);//判断是否赢,谁赢返回谁的符号
char IsFull(char **Board);//判断是否平局
void PrintOut(char **Board);//打印获胜情况
#endif //TRIMOKU_GAME_GAME_H