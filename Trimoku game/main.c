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
        printf("³ÌĞò½áÊø\n");
    }
    system("pause");
    return 0;
}
