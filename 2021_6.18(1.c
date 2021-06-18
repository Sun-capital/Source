#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int mian()
{
	int a, b, c, tmp;
		scanf("%d %d %d", &a, &b, &c);
		if (a < b)
		{
			tmp = a;
			a = b;
			b = tmp;
		}
		if (a < c)
		{
			tmp = a;
			a = c;
			c = tmp;
		}
		if (b < c)
		{
			tmp = b;
			b = c;
			c = tmp;
		}
		printf("%d %d %d", a, b, c);
	return 0;
}