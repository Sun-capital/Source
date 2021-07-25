#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Break(int n)
{
	int s;
	int ret = 0;
	if (n > 9)
	{
		s = n % 10;
		return s + Break(n / 10);
	}
	else
		return n;
	
	
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum=Break(n);
	printf("%d", sum);
	return 0;
}