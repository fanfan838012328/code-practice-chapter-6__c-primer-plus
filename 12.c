//��ӡint����
# include <stdio.h>
# include <math.h>

int main12(void)
{
	int array[8];
	int i, j;
	for (i = 0; i <= 7; i++)
		array[i] = pow(2, i);
	j = 0;
	do {
		printf("%d ", array[j]);
		j++;
	} while (j <= 7);
	return 0;
}//�õ���mathͷ�ļ��µ�pow(x,y)����,x�ǵ���,y��ָ��