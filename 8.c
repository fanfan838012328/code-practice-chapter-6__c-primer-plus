# include <stdio.h>
# include <math.h>
 void calculute_num(double num1, double num2);

int main08(void)
{
	double num1, num2;
	printf("��������Ҫ���������С��,�ÿո����:\n");
	while (2 == scanf("%lf %lf", &num1, &num2))//����
	{
		calculute_num(num1, num2);
		printf("���Ҫ�����Ļ������,�˳���q:\n");
	}
	return 0;
}
void calculute_num(double num1, double num2)
{
	printf("���Ϊ:%lf", fabs(num1 - num2)/( num1 * num2));
	return 0;
}