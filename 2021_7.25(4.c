#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Power(int n, int k)
{
	if (k > 1)
		return n * Power(n, k - 1);
	else
		return n;
}
int main()
{
	int n, k;
	scanf("%d", &n);
	scanf("%d", &k);
	int ret = Power(n, k);
	printf("%d", ret);
	return 0;
}