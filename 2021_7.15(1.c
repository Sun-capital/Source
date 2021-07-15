#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int fabonacci(int n)
{
	int a1 = 1;
	int a2 = 1;
	int a3 = 1;
	int i = 0;
	for (i = 3; i <= n; i++)
	{
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
	}
	return a3;
}
int main()
{
	int a;
	scanf("%d", &a);
	printf("%d\n", fabonacci(a));
	return 0;
}