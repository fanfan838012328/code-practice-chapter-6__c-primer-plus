//��ʮ��
#include <stdio.h>

int main10(void)
{
    int integer[8];
    int i;
    printf("��������Ҫ�����ӡ��8������(�Կո����)��\n");
    for (i = 0; i <= 7; ++i)//����
    {
        scanf("%d", &integer[i]);
    }
    for (i = 7; i >= 0; i--)
    {
        printf("%d\t", integer[i]);
    }
    return 0;
}