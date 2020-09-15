//反向输出输入单词
#include <stdio.h>
#include <string.h>

int main06(void)
{
	char word[10];
	int i;
	printf("请输入你要反向打印的单词:\n");
	scanf("%s", word);
	int len = strlen(word);
	for (i = len; i >= 0; --i)
		printf("%c", word[i]);
	return 0;
}
/*
请输入你要反向打印的单词:
sunny
ynnus
*/