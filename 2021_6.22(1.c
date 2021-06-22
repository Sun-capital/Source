#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
		int i, j;
	int tmp = 1;
	int ret = 0;
	
	for (i = 1; i <= 10; i++)
	{
		tmp = 1;
		for (j = 1; j <= i; j++)
		{
			tmp *= j;
		}
		ret += tmp;
	}
	printf("%d", ret);



	return 0;

}