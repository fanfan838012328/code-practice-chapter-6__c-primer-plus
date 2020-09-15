//打印int数组
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
}//用到了math头文件下的pow(x,y)函数,x是底数,y是指数