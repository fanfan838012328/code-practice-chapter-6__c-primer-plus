//第九题
# include <stdio.h>
int main09(void)

{
	int upnum, downnum,i,sum;
	printf("Enter lower and upper integer limits:");

	scanf("%d %d", &downnum, &upnum);
	while (upnum > downnum)
	{
		for (i = downnum,sum=0; i <= upnum; ++i)//sum应该在这初始化,不然第二次循环会加上第一次循环的值
		{
			sum += i * i;
		}
		printf("The sums of the squares from %d to %d is %d\n", downnum, upnum, sum);
		printf("enter next set of limits:");
		scanf("%d %d", &downnum, &upnum);
	}
	printf("done\n");
	return 0;
}