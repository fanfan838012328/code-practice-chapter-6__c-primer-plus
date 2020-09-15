//²úÉúÍ¼°¸
# include <stdio.h>

int main03(void)
{
	int i, k,l;
	for (i = 1; i <= 6; ++i)
	{
		for (k = 1,l = 70; k <= i; ++k,--l)
			printf("%c", l);
		printf("\n");
	}
	return 0;
}/*
	F
	FE
	FED
	FEDC
	FEDCB
	FEDCBA

 */