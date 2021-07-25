#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int factorial1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int factorial2(int n)
{
	if (n >= 1)
		return n * factorial2(n - 1);
	else
		return 1;
}
int main()
{
	int n = 0;
	int sum1, sum2;
	scanf("%d", &n);
	sum1=factorial1(n);
	sum2 = factorial2(n);
	printf("%d\n", sum1);
	printf("%d\n", sum2);
	return 0;
}