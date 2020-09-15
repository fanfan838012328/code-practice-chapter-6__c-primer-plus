//²úÉúÍ¼°¸
# include <stdio.h>

int main02(void)
{
	int i,k;
	for (i = 1; i <= 5; ++i)
	{
		for (k = 1; k <= i; ++k)
			printf("$");
		printf("\n");
	}
	return 0;
}/*
	$
	$$
	$$$
	$$$$
	$$$$$
 */