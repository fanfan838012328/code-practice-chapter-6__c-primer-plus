//��ӡ��ƽ��������
# include <stdio.h>

int main05(void)
{
	int max, min, num;
	printf("���������޺�����,�ÿո����:\n");
	scanf("%d %d", &min, &max);
	printf("%10s %10s %10s\n", "num", "square", "cube");

	for (num = min; num <= max; ++num)
	{
		printf("%10d %10d %10d\n", num, num * num, num * num * num);
	}
	return 0;
}
/*
���������޺�����,�ÿո����:
9 14
	   num     square       cube
		 9         81        729
		10        100       1000
		11        121       1331
		12        144       1728
		13        169       2197
		14        196       2744

*/