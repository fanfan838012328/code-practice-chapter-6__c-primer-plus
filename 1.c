//������洢26����ĸ,����ʾ
# include <stdio.h>

int main01(void)
{
	char letter[26];
	int i;
	int j = 97;
	
	for (i = 0; i <= 25; i++,j++)
	{
		letter[i] = j;
	}
	
	for (i = 0; i <= 25; i++)
	{
		printf("%c ", letter[i]);
	}
	return 0;
}
//���Ϊ:a b c d e f g h i j k l m n o p q r s t u v w x y z