//����������뵥��
#include <stdio.h>
#include <string.h>

int main06(void)
{
	char word[10];
	int i;
	printf("��������Ҫ�����ӡ�ĵ���:\n");
	scanf("%s", word);
	int len = strlen(word);
	for (i = len; i >= 0; --i)
		printf("%c", word[i]);
	return 0;
}
/*
��������Ҫ�����ӡ�ĵ���:
sunny
ynnus
*/