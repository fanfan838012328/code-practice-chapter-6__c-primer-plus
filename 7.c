//求差和乘积
# include <stdio.h>
# include <math.h>
int main07(void)
{
	double num1, num2;
	printf("请输入你要计算的两个小数,用空格隔开:\n");
	while ( 2 == scanf("%lf %lf", &num1, &num2))//巧妙
	{
		printf("之差为: % lf, 之积为 : % lf\n",fabs(num1-num2),num1*num2);
		printf("如果要继续的话请继续,退出按q:\n");
	}
	return 0;
}
/*
请输入你要计算的两个小数,用空格隔开:
8.8 9.0
之差为:  0.200000, 之积为 :  79.200000
如果要继续的话请继续,退出按q:
1.2q
//然后就退出了
*/