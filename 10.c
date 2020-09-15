//第十题
#include <stdio.h>

int main10(void)
{
    int integer[8];
    int i;
    printf("请输入你要反向打印的8个整数(以空格隔开)：\n");
    for (i = 0; i <= 7; ++i)//输入
    {
        scanf("%d", &integer[i]);
    }
    for (i = 7; i >= 0; i--)
    {
        printf("%d\t", integer[i]);
    }
    return 0;
}