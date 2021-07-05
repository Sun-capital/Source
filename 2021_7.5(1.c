#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 5;
	if (0 == i)
	{
		i = 10;
		printf("%d", i);
	}
	else if (i >= 0)
	{
		i = -10;
		printf("%d", i);
	}
	else
	{
		i = 0;
		printf("%d", i);
	}
	return 0;

}