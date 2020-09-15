//两个double数组
# include <stdio.h>

int main22(void)
{
	int i, j;
	double arr1[8], arr2[8];
	arr2[0] = 0;
	printf("请键入第一行数组的八个元素(用空行隔开):\n");
	for (i = 0; i <= 7; i++)
	{
		scanf("%lf", &arr1[i]);
		for (j = 0; j <= i; ++j)
			arr2[i] += arr1[j];
	}
	for (i = 0; i < 8; i++)
		printf("%3lf ", arr1[i]);
	printf("\n");
	for (i = 0; i < 8; i++)
		printf("%3lf ", arr2[i]);
	return 0;
}
int main(void)
{
	double num[8], sum[8];
	int i, j;
	printf("enter 8 numbers:\n");
	for (i = 0; i < 8; i++)
	{
		scanf("%lf", &num[i]);
		for (j = 0, sum[i] = 0; j <= i; j++)
			sum[i] += num[j];//这里i始终没变,sum[i]却随着上次循环的变化而变化
	}
	for (i = 0; i < 8; i++)
		printf("%3lf ", num[i]);
	printf("\n");
	for (i = 0; i < 8; i++)
		printf("%3lf ", sum [i]);
	return 0;
}