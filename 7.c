//���ͳ˻�
# include <stdio.h>
# include <math.h>
int main07(void)
{
	double num1, num2;
	printf("��������Ҫ���������С��,�ÿո����:\n");
	while ( 2 == scanf("%lf %lf", &num1, &num2))//����
	{
		printf("֮��Ϊ: % lf, ֮��Ϊ : % lf\n",fabs(num1-num2),num1*num2);
		printf("���Ҫ�����Ļ������,�˳���q:\n");
	}
	return 0;
}
/*
��������Ҫ���������С��,�ÿո����:
8.8 9.0
֮��Ϊ:  0.200000, ֮��Ϊ :  79.200000
���Ҫ�����Ļ������,�˳���q:
1.2q
//Ȼ����˳���
*/