#include "Game.h"
int main()
{
    Menu();
    if(Decide()==1)
    {
        BegainGame();
    }
    else
    {
        printf("�������\n");
    }
    system("pause");
    return 0;
}
