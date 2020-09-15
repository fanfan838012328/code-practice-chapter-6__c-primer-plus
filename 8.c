# include <stdio.h>
# include <math.h>
 void calculute_num(double num1, double num2);

int main08(void)
{
	double num1, num2;
	printf("请输入你要计算的两个小数,用空格隔开:\n");
	while (2 == scanf("%lf %lf", &num1, &num2))//巧妙
	{
		calculute_num(num1, num2);
		printf("如果要继续的话请继续,退出按q:\n");
	}
	return 0;
}
void calculute_num(double num1, double num2)
{
	printf("结果为:%lf", fabs(num1 - num2)/( num1 * num2));
	return 0;
}