//����ѭ�����������ͼ��
# include <stdio.h>

int main04(void)
{
	int i, j, k, l;
	char putlet;
	int c = 65;
	printf("��������Ľ�����ͼ����Ҫ�������ĸ(��д):");
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
 ��������Ľ�����ͼ����Ҫ�������ĸ(��д):G
       A
      ABA
     ABCBA
    ABCDCBA
   ABCDEDCBA
  ABCDEFEDCBA
 ABCDEFGFEDCBA

 Ϊʲô��ô��ʱ�䶼û��д����,��Ϊ��û��������������������ôִ�е�
 */