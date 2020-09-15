# include <stdio.h>

int main011(void)

{
	int counts,sign;
	double i,sum1,sum2;
	printf("请输入你要计算到的数:\n");
	scanf("%d", &counts);
	for (i = 1.0,sign = 1,sum1 = 0,sum2 = 0; i <= counts;i++,sign = -sign)
	{
		sum1 += 1.0 / i;
		sum2 += sign * 1.0 / i;
	}
	printf("%lf\t%lf", sum1,sum2);
	return 0;

}
/*
请输入你要计算到的数:
20
3.597740        0.668771
请输入你要计算到的数:
100
5.187378        0.688172
请输入你要计算到的数:
500
6.792823        0.692148

*/