//���ļ�
#include "game.h"
int main()
{
    init();
    int i=1;
    while (i)
    {
        scanf("%d", &i);//1����Ϸ��0�˳�����������ѭ��
        switch (i)
        {
            case 1:
                printf("��Ϸ��ʼ!!!\n");
                game();
                break;
            case 0:
                printf("������Ϸ");
                break;
            default:
                printf("�������룬����������-->");
        }
    }

}