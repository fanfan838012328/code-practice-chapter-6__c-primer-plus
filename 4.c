//利用循环打出金字塔图案
# include <stdio.h>

int main04(void)
{
	int i, j, k, l;
	char putlet;
	int c = 65;
	printf("请输入你的金字塔图案所要到达的字母(大写):");
	scanf("%c", &putlet);
	int a = putlet - 64;
	for (i = 1; i <= a; ++i)
	{
		for (j = a; j >= i; --j)
			printf(" ");
		for (k = 1;k <= i; ++k)
			printf("%c",64 + k);
		for (l = i-2; l>=0 ; l--)
			printf("%c", 65+l);
		printf("\n");

	}
	return 0;
}/*
 请输入你的金字塔图案所要到达的字母(大写):G
       A
      ABA
     ABCBA
    ABCDCBA
   ABCDEDCBA
  ABCDEFEDCBA
 ABCDEFGFEDCBA

 为什么这么长时间都没有写出来,因为你没有认真的想这个程序是怎么执行的
 */