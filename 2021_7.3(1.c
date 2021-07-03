#define _CRT_SECURE_NO_WARNINGS 1
//优化辗转相除
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int r = 0;
	while (r = a % b)
	{
		a = b;
		b = r;
	}
	printf("%d\n", b);
	return 0;
}