//�ھ���
# include <stdio.h>
int main09(void)

{
	int upnum, downnum,i,sum;
	printf("Enter lower and upper integer limits:");

	scanf("%d %d", &downnum, &upnum);
	while (upnum > downnum)
	{
		for (i = downnum,sum=0; i <= upnum; ++i)//sumӦ�������ʼ��,��Ȼ�ڶ���ѭ������ϵ�һ��ѭ����ֵ
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