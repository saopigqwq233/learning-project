//主文件
#include "game.h"
int main()
{
    init();
    int i=1;
    while (i)
    {
        scanf("%d", &i);//1玩游戏，0退出，其它的数循环
        switch (i)
        {
            case 1:
                printf("游戏开始!!!\n");
                game();
                break;
            case 0:
                printf("结束游戏");
                break;
            default:
                printf("错误输入，请重新输入-->");
        }
    }

}